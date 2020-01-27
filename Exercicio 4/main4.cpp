#include <iostream>
#include "exercicio4.h"

using namespace std;

void localizando(int x, int y, int p){
	int ponto = p;

	if(ponto == 1)
		cout<<"Ponto("<< x <<','<< y <<"): dentro do retangulo."<<endl;
	if(ponto == -1)
		cout<<"Ponto("<< x <<','<< y <<"): fora do retangulo."<<endl;
	if(ponto == 0)
		cout<<"Ponto("<< x <<','<< y <<"): na borda do retangulo."<<endl;
}

int main(){
	Retangulo A(10,10,4,8);

	A.show();
	localizando(12,7,A.localizarP(12,7));
	localizando(11,9,A.localizarP(11,9));
	localizando(20,18,A.localizarP(20,18));	
	return 0;
}