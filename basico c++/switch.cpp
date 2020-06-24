#include <iostream>

using namespace std;

main(){

  int val0 =5;

  switch (val0) { /* se val0 for caso 1 execute caso 1
                    se for caso 5 execute caso 5*/
    case 1: //caso val0 seja 1
      cout << "numero 1"<< endl;
      break; //finaliza o case
    case 5:  //caso val0 seja 5
      cout << "numero 5"<< endl;
      break;
    default://caso nao seja nenhuma opcao alias default e opcional!
      cout << "seu numero nao foi encontrado"<< endl;
      break;

  };

  cout << "exemplo 2:"<< endl;
    //exemplo de uso sem break
    //usuario digita ou q ou Q

  char command = 'q';

  switch (command) {
      case 'q'://nesse caso q ou Q indica saida
      cout << "Saindo do sistema"<<endl;
      case 'Q'://entao sem o break os dois serao rodados ate o break
      cout << "Finalizando operacao"<< endl;
      break;
      case  's':
      cout << "Continuando operacao";
      default:
      cout << "operacao parada";
    };

  return 0;
}
