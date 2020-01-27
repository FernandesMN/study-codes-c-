#include <iostream>
#include <stdlib.h>
#include "exercicio2.h"
#include <time.h>

using namespace std;

MatrizOperacao::MatrizOperacao(){
	setMatriz();
}

void MatrizOperacao::setMatriz(){
	int i, j;
	srand(time(NULL));

	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			matriz[i][j] = rand() % 101 - 50; //gera valores entre 0 e 100 depois subtrai 50, entao pode gerar de -50 a 50
		}
	}
}

void MatrizOperacao::show(){
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			cout<< matriz[i][j]<<' ';
		}
	}
}