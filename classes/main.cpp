#include <iostream>

//Atenção para usar o count e necessario o namespace
using namespace std;

class Pessoa{
	private:
		int id;
	public:
		char nome[100];
		char cpf[20];
		int idade;
		
		Pessoa(){
			this->id = 25;
		}

		int getId(){
			return this->id;
		}
};


int main(){
	
	Pessoa p;
	
	p.idade = 54;

	cout <<  "Id	:	" << p.getId() << endl;
	cout <<  "Idade	:	" << p.idade << endl;
	
	return 0;
}
