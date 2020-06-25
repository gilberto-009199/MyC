#include <iostream>

using namespace std;

main(){

  int dilheiro=9;
  //{} = abre bloco nao e necessaria
  // if = se, decicao
  if(dilheiro > 10){ //se (verdadeiro) entao fale "eu vou"
    cout << "eu vou"; //verdadeiro

  } else{ //else = senao
    cout << "nao vou";//falso
  };
  //>< operadores de maior ou menor
  //== operadore de igualdade
  //>= maior ou igual
  //<= menor ou igual
  //!= operador de desiqualdade se 1 for diverente de 2 então{}if (1!=2)

  /*OPERADORES LOGICOS
    && = e = todas as condidoes sendo verdadeiras
    if ((dilheiro >10) && dilheiro <130){};
    ! = not = inverte de verdadeiro para falso(ou o contrario) = senao for ()entao{}
    if (!(dilheiro>10)){};

  */
  //Atencao nova variavel bool
  // bool acumula ou falso ou verdadeiro (true ou false)
  //exemplo bool valormaior= 10>30; cout <<valormaior;
  // saida:'0' = false :'1' =true,isso tambem pode ser utilidado com o if
  //if (valormaior){};
  return 0;

}
