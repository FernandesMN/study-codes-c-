#ifndef __EXERCICIO6_
#define __EXERCICIO6_

#include <stdbool.h>

class Triangulo{

private:
	int a,
		b,
		c;
public:
	Triangulo(int n1, int n2, int n3);
	
	bool lado1();
	bool lado2();
	bool lado3();
	int verifica();

	void show();
};

#endif