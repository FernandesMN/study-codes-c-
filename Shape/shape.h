#ifndef __shape_h_
#define __shape_h_

#include <math.h>
/*====================================CLASSE BASE ABSTRATA ======================================*/
class Forma{
protected:	//atributos para poligonos regulares
	 float 	base,
	 		altura,
	 		area,
	 		perimetro;
public:
	Forma(float b){	//construtor para triangulo retangulo, escaleno e isosceles
		base = b;
	}
	Forma(float b, float h){	//construtor para retangulo, quadrado
		base = b;
		altura = h;
		std::cout<<"->Definindo base e altura<-\n";
	}
	virtual
	float areaPoligono() = 0;
	virtual
	float perimetroPoligono() = 0;
};

/*================================CLASSE FILHA CONCRETA - RETANGULO=============================*/
class Retangulo : public Forma
{
protected:
	float l1, l2, l3, l4;	//lados
public:
	Retangulo(float b, float h) : Forma(b, h)
	{
		l1 = altura;
		l2 = l1;
		l3 = base;
		l4 = l3;
		std::cout<<"RETANGULO\n";
	}
	inline
	float areaPoligono(){
		return area = base * altura;
	}
	inline
	float perimetroPoligono(){
		return perimetro = l1 + l2 + l3 + l4;
	}
};

/*===============================CLASSE FILHA CONCRETA - QUADRADO==============================*/
class Quadrado : public Retangulo
{
public:
	Quadrado(float l) : Retangulo(l, l){
		std::cout<<"QUADRADO\n";
	}
};

/*=============================CLASSE FILHA ABSTRATA - TRIANGULO===============================*/
class Triangulo : public Forma
{
protected:
	float lado1, lado2;
public:
	Triangulo(float l1, float l2, float b) : Forma(b)	//construtor para o escaleno e isosceles
	{
		lado1 = l1;
		lado2 = l2;
		std::cout<<"TRIANGULO\n";
	}
	inline
	float perimetroPoligono(){
		return perimetro = lado1 + lado2 + base;
	}
};

/*=============================CLASSE FILHA CONCRETA - TRIANGULO ESCALENO======================*/
class Tescaleno : public Triangulo
{
public:
	Tescaleno(float l1, float l2, float b) : Triangulo(l1,l2,b){
		std::cout<<"TRIANGULO ESCALENO\n";
	}
	inline
	float areaPoligono(){
		float p = (lado1 + lado2 + base) / 2;
		return area = sqrt(p*(p-lado1)*(p-lado2)*(p-base));
	}
};
/*=========================CLASSE FILHA CONCRETA - TRIANGULO ISOSCELES=========================*/
class Tisosceles : public Triangulo
{
public:
	Tisosceles(float l1, float l2, float b) : Triangulo(l1,l2,b){
		std::cout<<"TRIANGULO ISOSCELES\n";
		setAltura();
	}
	inline
	void setAltura(){
		float b2;	//metade da base
		b2 = base / 2;
		altura = sqrt((lado1*lado1) - (b2*b2));
	}
	inline
	float areaPoligono(){
		return area = (base * altura) / 2;
	}
};

/*=======================CLASSE FILHA CONCRETA - TRIANGULO RETANGULO==========================*/
class Tretangulo : public Triangulo
{
public:
	Tretangulo(float l1, float l2, float b) : Triangulo(l1,l2,b){
		std::cout<<"TRIANGULO RETANGULO\n";
		altura = l2;
	}
	inline
	float areaPoligono(){
		return area = (base * altura) / 2;
	}
};
#endif