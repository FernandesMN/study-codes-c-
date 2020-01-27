#include <iostream>
#include <math.h>
#include "exercicio1.h"

using namespace std;

VetorOperacao::VetorOperacao(int v[], int val){
	setValor(val);
	setVet(v);
}

void VetorOperacao::show(){
	for(int i = 0; i < TAM; i++){
		cout<< vet[i] << ' ';
	}
	cout<<endl;
}

void VetorOperacao::inverter(){
	int i, j, aux;

	j = TAM -1;
	for(i = 0; i <= ((TAM-1)/2); i++){
		aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
		j--;
	}
}

void VetorOperacao::raiz(){
		int i;
		for(i = 0; i < TAM; i++){
			vet [i] = sqrt(vet[i]);
		}
	}