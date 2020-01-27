#include <iostream>
#include <stdbool.h>
#include "exercicio6.h"

using namespace std;

Triangulo::Triangulo(int n1, int n2, int n3){
	a = n1;
	b = n2;
	c = n3;
}

bool Triangulo::lado1(){
	if(a > (b - c))
		if(a < (b + c))
			return true;
	else
		return false;
}

bool Triangulo::lado2(){
	if(b > (a - c))
		if(b < (a + c))
			return true;
	else
		return false;
}

bool Triangulo::lado3(){
	if(c > (a - b))
		if(c < (a + b))
			return true;
	else
		return false;
}

int Triangulo::verifica(){
	if((lado1() == true)&&(lado2() == true)&&(lado3() == true))
		return 1;
	else
		return -1;
}

void Triangulo::show(){
	int teste = verifica();

	if(teste == 1)
		cout<<"Lados: "<< a <<", "<< b <<", "<< c <<" formam um triangulo"<<endl;
	if(teste == -1)
		cout<<"Lados: "<< a <<", "<< b <<", "<< c <<" nao formam um triangulo"<<endl;
}