#ifndef __exception_h_
#define __exception_h_

#include <exception>
#include <string.h>

class ExcecaoCustom : public std::exception
{
protected:
	char msg[100];
public:
	ExcecaoCustom(const char* e){
		strcpy(msg,e);
	}
	virtual const char* what(){
		return msg;
	}
};

int fatorial(int n){
	if(n < 0)
		throw ExcecaoCustom("Numero negativo!");
	if(n == 0 || n == 1)
		return 1;
	return n * fatorial(n - 1);
}

#endif