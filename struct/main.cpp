#include <iostream>
#include <string.h>

using namespace std;

typedef struct pessoa {
	char nome[100];
	int idade;
}t_pessoa;

// strct v2
struct Pessoa2{
	int idade;
	int gg;
	int hh;
	
	//Construtor 
	Pessoa2(int idade){
		this->idade = idade;
	}
	
	
	void setIdade(int idade){
		this->idade = idade;
	}
	void setGg(int gg){
		this->gg = gg;
	}
	void setHh(int hh){
		this->hh = hh;

	}

	int getIdade(){
		return this->idade;
	}
	int getGg(){
		return this->gg;
	}
};

int main(){
	/* Atenção!! poderia ser feito 
	 * typedef struct pessoa {
	 *		char nome[100];
	 *		int idade;
	 *	}
	 * 
	 * struct pessoa p;
	 * mas para evitar o struct uamos o typedef com t_pessoa
	 *	Alias se for para c++(sem compatibilidade com c ) então só 
	 *  e necessario escrever
	 * 	pessoa p; 
	 */

	t_pessoa p;
	
	strcpy(p.nome,"gil");
	
	p.idade = 25;
	
	cout << p.idade << endl;
	
	Pessoa2 marcos(19);
	
	cout << marcos.idade << endl;
	
	marcos.setGg(100);
	cout << marcos.getGg() << endl;
	
	return 0;
}
