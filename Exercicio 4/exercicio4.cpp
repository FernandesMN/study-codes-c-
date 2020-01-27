#include <iostream>
#include "exercicio4.h"

using namespace std;

Retangulo::Retangulo(int x0, int y0, int h, int l){	//Construtor usando a chamada de funcoes ja prontas
	setX(x0);
	setY(y0);
	setAltura(h);
	setLargura(l);
	perimetro(h,l);
	areaR(h, l);
}

int Retangulo::localizarP(int x, int y){
	int x1 = this->x;
	int y1 = this->y;
	int x2 = this->x + largura-1;
	int y2 = this->y - altura+1;

	if((x > x1) && (x < x2) && (y < y1) && ( y > y2)){
		return 1;	//DENTRO
	}else if((x < x1) || (x > x2) || (y > y1) || (y < y2)){
		return -1;	//FORA
	}else{
		return 0;	//BORDA
	}
}

void Retangulo::show(){
	char ch;	//caractere que sera colocado na tela

	for(int i = 0; i < altura; i++){	//sera repitido "altura" vezes
		for(int j = 0; j < largura; j++){	//sera repitido "largura" vezes
			if((i == 0)||(i == altura-1)){	//primeiro teste pra saber se eh ponta, esse if basicamente vai printar linha de cima e a de baixo
				if((j == 0)||(j == largura-1))	//segundo teste pra saber se eh ponta
					ch = '+';	//se for, o + eh printado
				else
					ch = '-';	//senao eh meio, e eh printado o -
			}
			else{
				if((j == 0)||(j == largura-1))	//se não for ponta, eh meio do retangulo, se for canto, printa |
					ch = '|';
				else
					ch = ' ';	//se for meio e não canto, espaço em branco
			}
			cout<<ch;
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"Ponto: ("<<getX()<<','<<getY()<<")"<<endl;
	cout<<"Altura: "<<getAltura()<<endl;
	cout<<"Largura: "<<getLargura()<<endl;
	cout<<"Area: "<<getArea()<<endl;
	cout<<"Perimetro: "<<getPerim()<<endl;
}