#include <iostream>

using namespace std;
/*
  Calculadora
*/
main(){
  int val0, val2;
  char a;
  //cin = funcao que pega dados do usuario
  cout << "Digite o primeiro numero da operacao:" << endl;
  cin >> val0; //cin pega dados do usuario
  cout << "Digite o segundo numero da operacao:" << endl;
  cin >>val2;
  cout << "Digite o nome da operacao:" << endl;
  cin >>a;

  switch (a) {
    case '+':
      cout << val0 + val2  << endl;
      break;
    case '-':
      cout << val0 - val2  << endl;
      break;
    case '*':
      cout << val0 * val2  << endl;
      break;
    case '/':
      cout << (float)val0 / val2  << endl;
      break;
    default:
    cout << "Erro: operacao n identificada!"<< endl;
  };

  return 0;

}
