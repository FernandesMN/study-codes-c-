#include <iostream>
#include "exercicio5.h"

using namespace std;

int main(){
	Matriz A(3);
	Matriz B(3);

	A.preenche(100);	//o numero e para o limite de random
	A.show(3);	//o numero eh para defeinir a largura do campo de saida, deixe sempre a dimensao da martiz

	B.preenche(200);
	B.show(3);
	
	return 0;
}