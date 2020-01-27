#include <iostream>
#include "ponto.h"

using namespace std;

int main(){
	
	Ponto A;
	Ponto B(3,7);
	Ponto C(B);
	Ponto D(-5,-12);
	Ponto E;

	A.show();
	B.show();
	C.show();
	D.show();

	cout<<"------------------"<<endl;

	C.posXY(2,5);
	C.show();
	cout<<"Distancia Euclidiana: "<<C.dEuclidiana(A)<<endl;
	cout<<"Sao iguais: "<<C.compSem(B)<<endl;

	cout<<"------------------"<<endl;
	
	C.posObj(D);
	C.show();
	cout<<"Distancia Euclidiana: "<<D.dEuclidiana(B)<<endl;
	cout<<"Sao iguais: "<<D.compSem(B)<<endl;

	cout<<"------------------"<<endl;
	
	E.clone(B);
	E.show();
	cout<<"Distancia Euclidiana: "<<E.dEuclidiana(B)<<endl;
	cout<<"Sao iguais: "<<E.compSem(B)<<endl;

	cout<<endl;
	cout<<endl;
	cout<<"------------------"<<endl;

	cout<<"B e D sao iguais: "<<(B == D)<<endl;
	return 0;
}