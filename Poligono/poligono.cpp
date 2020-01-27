#include <iostream>
#include "poligono.h"

using namespace std;

int main(){
	Poligono A;
	Poligono B(A);

	A.addVertice(3,9);
	A.addVertice(8,9);
	A.addVertice(13,4);
	A.addVertice(12,-6);
	A.addVertice(2,-2);
	A.addVertice(-4,-6);
	A.addVertice(-4,4);
	A.show();

	cout<<"-----------------------------------------"<<endl;
	
	B.addVertice(0,7);
	B.show();

	return 0;
}