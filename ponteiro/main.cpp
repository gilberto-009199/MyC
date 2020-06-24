#include <iostream>

using namespace std;

int main(){
	// Criando a variavel(espaco na memoria) do tipo int
	int var = 10;
	/* Criando um variavel ponteiro que apontara para
	*  o espaco da memoria  da variavel int var
	*/
	int* ponteirovar;// Ponteiro para uma variavel do tipo int
	
	// Definindo o ponteiro 
	// & = referencia da variavel a frente(&variavel)
	ponteirovar = &var;
	//Atribuindo valor para var atraves do ponteiro
	*ponteirovar = 32;
	
	cout << *ponteirovar << endl;
	
	return 0;
}
