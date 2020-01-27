#include <iostream>
#include <stdio.h>
#include "retangulo.h"

using namespace std;

Retangulo::Retangulo(int x, int y, int w, int h){
	this->x = x;
	this->y = y;
	this->largura = w;
	this->altura = h;
}

void Retangulo::show(){
	char ch;

	for(int i = 0; i < altura; i++){
		for(int j = 0; j < largura; j++){
			if((i == 0)||(i == altura-1))
				if((j == 0)||(j == largura-1))
					ch = '+';
				else
					ch = '-';
			else
				if((j == 0)||(j == largura-1))
					ch = '|'; 
				else
					ch = ' ';

			cout<< ch;
		}
		cout<< endl;
	}
	cout<< endl;

	cout<< "Area = "<< area()<< endl;
	cout<< "Perimetro = "<< perimetro()<< endl;
}

int Retangulo::localizarP(int x, int y){
	int x1 = this->x,
		y1 = this->y,
		x2 = this->x + largura-1,
		y2 = this->y - altura+1;

	if((x > x1)&&(x < x2)&&(y < y1)&&(y > y2))
		return 1; //dentro
	else if((x > x1)&&(x > x2)&&(y > y1)&&(y < y2))
		return -1; //fora
	return 0; //na borda
}