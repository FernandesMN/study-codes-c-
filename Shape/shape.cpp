#include <iostream>
#include "shape.h"
#include <stdio.h>

using namespace std;

int main(){
	
	Retangulo R(10,5);	//envie a base e altura
	printf("Area do retangulo: %.2f\n", R.areaPoligono());
	printf("Perimetro do retangulo: %.2f\n", R.perimetroPoligono());

	printf("\n");

	Quadrado Q(10);	//envie o lado
	printf("Area do quadrado: %.2f\n", Q.areaPoligono());
	printf("Perimetro do quadrado: %.2f\n", Q.perimetroPoligono());

	printf("\n");

	Tescaleno E(5,7,8);	//envie os lados
	printf("Area do triangulo escaleno: %.2f\n", E.areaPoligono());
	printf("Perimetro do triangulo escaleno: %.2f\n", E.perimetroPoligono());

	printf("\n");

	Tisosceles I(10,10,12);	//envie os lados e a base
	printf("Area do triangulo isosceles: %.2f\n", I.areaPoligono());
	printf("Perimetro do triangulo isosceles: %.2f\n", I.perimetroPoligono());

	printf("\n");

	Tretangulo TR(20,12,16);	//envie lado 1, altura e base
	printf("Area do triangulo retangulo: %.2f\n", TR.areaPoligono());
	printf("Perimetro do triangulo retangulo: %.2f\n", TR.perimetroPoligono());
	return 0;
}