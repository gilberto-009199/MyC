#include <iostream>

using namespace std;

main(){

  int val0, val2;
  //inicializar = variavel limpa sem memoria
  //quando criada uma variavel vem com um numero

  val0=2;
  val2=3;
  cout << val0 + val2 << endl; //soma
  cout << val2 - val0 << endl; //subtração
  cout << val2 * val0; //multiplicacao
  cout << (float)val2 / val0; //divicao
  //(float) use afrente de uma variaveis da operacao de divicao
  //para o resultado ser numero quebrado ,com virgula
  cout << val2 % val0; //modulo = resto da divisão
  val0++; //adiciona +1 na variavel val0
  val2--; //reduz -1 na variavel val2

  val0 += 1;// =val0++
  val2 -= 1;//=val2++

  return 0;
}
