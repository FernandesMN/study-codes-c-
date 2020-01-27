#include <iostream>
#include "retangulo.h"

using namespace std;

void posicao(Retangulo &a, int x, int y){
	const char *pos;
	switch(a.localizarP(x,y)){
		case -1: pos = "FORA"; break;
		case  1: pos = "DENTRO"; break;
		case  0: pos = " NA BORDA"; break;
	}

	cout<< "P("<<x<<';'<<y<<") esta "<<pos<<" no retangulo"<<endl;
}

int main(){
	Retangulo A(20, 10, 40, 20);
	A.show();

	posicao(A, 1, 2);
	return 0;
}