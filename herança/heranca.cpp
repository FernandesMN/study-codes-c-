#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
private:
	char* nome;
	bool  voa;
	int   patas;
public:
	Animal(const char* nome){
		cout<<"Construindo Animal"<<endl;
		this->nome = new char[strlen(nome) + 1];
		strcpy(this->nome,nome);
		voa = false;
		patas = 0;
	}

	const char* getNome(){
		return nome;
	}
	bool getVoa(){
		return voa;
	}
	int getPatas(){
		return patas;
	}

	~Animal(){
		delete[] nome;
		nome = 0;
	}
};

class Cachorro : public Animal
{
protected:
	int idade;
public:
	Cachorro(const char* nome, int idade) : Animal(nome){
		cout<<"Construindo Cachorro"<<endl;
		this->idade = idade;
	}
	int getIdade(){
		return idade;
	}
};

int main(){
	Cachorro b("Bira",12);
	cout<<"\n";
	cout<<"Nome do cachorro: "<<b.getNome()<<endl;
	cout<<"Idade do cachorro: "<<b.getIdade()<<endl;
	return 0;
}