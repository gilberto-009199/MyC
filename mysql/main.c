#include <stdio.h>
#include <mysql/mysql.h>

#define host "127.0.0.1"
#define user "root"
#define pass "12345ola"
#define database "tmpdb"

MYSQL *socket = NULL;
MYSQL_RES *res;
int num_fields, i;
MYSQL_ROW row;
unsigned long *lengths;

void getUsers(){
 if(mysql_query(socket,"SELECT * FROM user")){
    printf("Falha na conexão!! %s. ",mysql_error(socket));
 }else{
   //- solicitando resultado da pesquisa
        res = mysql_store_result(socket);
        if(res){
            num_fields = mysql_num_fields(res);
            //--- listando dados ---//
            while( (row = mysql_fetch_row(res)) ){
                lengths = mysql_fetch_lengths(res);
                for(i=0; i<num_fields; i++){
                    printf("%.*s ", (int)lengths[i], row[i]?row[i]:"NULL");
                }
                printf("\n");
            }
            mysql_free_result(res);
        }else  printf("Erro: %s\n",mysql_error(socket));
 }

}
void main(){
  //  Iniciando SOCKET
  socket = mysql_init(0);
  // Iniciando conexão
  mysql_real_connect(socket,host,user,pass,database,0,NULL,0);
  getUsers();
  mysql_close(socket);

}

