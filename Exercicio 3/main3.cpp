#include <iostream>
#include "exercicio3.h"

using namespace std;

int main(){
	Vetores a;

	cout<<"Vetor"<<endl;
	a.showVetor();
	cout<<"Vetor Impar"<<endl;
	a.showVetorImpar();
	cout<<endl;

	a.escreverVetor();
	a.escreverVetorImpar();
	cout<<endl;

	cout<<"Soma dos valores do vetor = "<< a.somaVetor() <<endl;
	cout<<"Soma dos valores do vetor impar = "<< a.somaVetorImpar() <<endl;
	return 0;
}