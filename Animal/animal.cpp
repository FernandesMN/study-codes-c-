#include <iostream>
#include "animal.h"
#define TAM 10

using namespace std;

typedef Animal* pAnimal;

int main(){
	int c = 0;
	pAnimal vetorAnimal[TAM];
	vetorAnimal[c++] = new Boi();
	vetorAnimal[c++] = new Gato();
	vetorAnimal[c++] = new Baleia();
	vetorAnimal[c++] = new Tubarao();

	for(int i = 0; i < c; i++){
		vetorAnimal[i]->show();
		cout<<endl;
	}
    return 0;
}