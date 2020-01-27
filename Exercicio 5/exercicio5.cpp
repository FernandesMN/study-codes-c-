#include <iostream>
#include <time.h>
#include <iomanip>
#include "exercicio5.h"

using namespace std;

Matriz::Matriz(int d){
	inicializa();
	dimensiona(d);
}
Matriz::~Matriz(){
	libera();
}

void Matriz::inicializa(){
	dim = 0;
	valores = NULL;
	linhas = NULL;
}

void Matriz::libera(){
	delete[] valores;
	delete[] linhas;
	inicializa();
}

void Matriz::dimensiona(int d){
	dim = d;
	valores = new int[dim*dim];	//aloca o numero de valores da matriz do tamanho de um inteiro
	linhas = new pMatriz[dim];	//aloca memoria para o vetor de ponteiros ou matriz

	for(int i = 0; i < dim; i++){
		linhas[i] = valores + i*dim; //linha na posicao i recebe pra quem o valores aponto mai i vezes a dimensao
	}								 //isso garante que cada ponteiro so aponte para o inicio de cada linha da mariz
}

void Matriz::preenche(int n){
	srand(time(NULL));

	for(int i = 0; i < dim*dim; i++){
		valores[i] = rand() % n; 
	}
}

void Matriz::show(int largura){
	for(int i = 0; i < dim; i++){
			cout<<'|';
		for(int j = 0; j < dim; j++){
			cout<<setw(largura)<<linhas[i][j]<<' ';	//setw(largura) define a largura do campo de saida na tela
		}
		cout<<'|'<<endl;
	}
	cout<<endl;
}