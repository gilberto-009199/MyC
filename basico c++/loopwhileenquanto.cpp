#include <iostream>

using namespace std;

int main(){

  //loop para mostrar numeros de 1 ate 100

  //while (/* condition */) {
  //  /* code */
  //}

  int val0 = 1;

  while (val0 <= 100 ) { // faça isso enquanto val0 for menor ou igual a 100
    cout << val0 << endl;
    //ATENCAO! comando break pode ser usado tambem para sair do loop
    /*exemplo: pergunta se depois do 50 deve continuar a operacao ao usuario
      if ( n = 50){
          cout << "deseja sair ou continuar?(s/n)"
          cin >> a;
          if (a = 's'){
            break; //sai do loop
         };
      };
      Exemplo 2:mostrar so numeros pares
      if (val0 % 2 != 0){  //se for par n tera resto
                          //logo o numero impar gera true por causa do !=
        continue; //comando para reiniciar o loop sem realizar o codigo depois dessa expressao(o codigo afrente)
        };
      };
    */
    val0++;  //ou val0 = val0 + 1
    //usando vall0++ para controlar o loop e realizar o salto de 1 para 100
  };



  return 0;

}
