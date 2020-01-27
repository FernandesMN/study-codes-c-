#include <iostream>
#include <stdio.h>
#include "exception.h"

using namespace std;

int main(){
	try{
		printf("O fatorial de 5 e': %d\n", fatorial(5));
		printf("O fatorial de -5 e': %d\n", fatorial(-5));
	}catch(ExcecaoCustom e){
		cerr<<"Erro! "<<e.what()<<endl;
	}catch(...){
		cerr<<"Erro  inesperado!"<<endl;
	}
	return 0;
}