#include <iostream>
#include "exercicio1.h"
#include <time.h>
#define TAM 10

using namespace std;

int main(){
	int valor = 1;
	int vetor[TAM];
	srand(time(NULL));

	for(int i = 0; i < TAM; i++){
		vetor[i] = rand() % TAM;
	}

	VetorOperacao a(vetor, valor);
	cout<<"Vetor"<<endl;
	a.show();	

	if((valor % 2 == 0)&&(valor > 30)){
		a.soma();
		cout<<"Vetor apos a soma"<<endl;
		a.show();
	}
	else if((valor % 2 == 1)&&(valor < 2)){
		a.inverter();
		cout<<"Vetor invertido"<<endl;
		a.show();
	}
	else if((valor >= 2)&&(valor <= 30)){
		a.raiz();
		cout<<"Raiz dos Valores do vetor"<<endl;
		a.show();
	}

	return 0;
}