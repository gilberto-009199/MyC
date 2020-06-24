#include <iostream>

using namespace std;

//função possui 3 informaçoes
// 1 tipo de valor que retornara texto,inteiro,real(1,8),condicao e etc senao for uma funcao void
// 2  nome da funcao para poder ser chama
// 3  parametros nome do paramentro que recebera se ouver! exemplo: de chamada f(3) ou fu()
//bool =retornara falso ou verdadeiro
//par nome da funcao
//(int num) nome da variavel que quardara os parametros passados dentro da funcao
bool par(int num){ // para passar mais paramentro use o ,
  if (num % 2 == 0){
    return true;
  }else{
    return false; //return e para retornar o valor de saida da funcao
    }
}
/*Atencao! se a funcao for colcada depois da funcao principal
que e a main() por padrao, quando ele for chamada pela main
a função nao sera encontra pois o sistema não há leu antes
não há carregou para ser usada depois!
para evitar escrever as funcoes nao pincipais
antes da main() escreva:

bool par(int num);

antes da main() e depois escreva a funcao normalmente
em qualquer lugar depois da main()
isso fara a funcao poder ser chamada depois da main!

Exemplo:
#include <iostream>

bool par(int num;)

main(){
 <codigo>
 par(2);
 <codigo>
}
bool par(int num){
 <codigo>
 return false/true;
}
E pronto!!Lindo!!
*/
main(){

  int n;

  cout << "Digite um numero:"<< endl;
  cin >> n;
  if (par(n)){
    cout << "Seu numero e par!";
  }else{
    cout << "seu numero e impar!";
  }

 return 0;
}
//funcoes void sao funcoes que nao possuem return ja que n passam nada
