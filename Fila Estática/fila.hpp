#ifndef __fila_hpp_
#define __fila_hpp_

template <typename T>
class Queve{
private:
	int count1;
	T *fila;
	int size;
public:	
	Queve(int N){
		fila = new T[N];
		count1  = 0;
		size = N;
	}
	inline
	void enqueve(T dado){
		if(full() == 1){
			 throw std::overflow_error("Stack is Full"); 
		}
		fila[count1++] = dado;
	}
	inline
	T dequeve(){
		if(empty() == 1){
			throw std::overflow_error("Stack is empty");
		}
		T dadoV;
		int count2 = 0;
		dadoV = fila[0];
		for(int i = 1; i < count1; i++){
			fila[count2] = fila[i];
			count2++;
		}
		count1--;
		return dadoV;
	}
	inline
	int sizeR(){
		return size;
	}
	inline
	int count(){
		return count1;
	}
	inline
	int empty(){
		return count1 == 0;
	}
	inline
	int full(){
		return count1 == size;
	}
	inline
	void show(){
		std::cout<<"{";
		for(int i = 0; i < count1; i++){
			std::cout<<fila[i]<<",";
		}
		std::cout<<"\b}"<<std::endl;
		std::cout<<"Capacidade da fila: "<<sizeR()<<std::endl;
		std::cout<<"N de elementos da fila: "<<count()<<std::endl;
	}
};

template <typename T>
class CQueve{
private:
	int count1;
	T *fila;
	T *inicio;
	T *fim;
	int size;
public:
	CQueve(int N){
		fila = new T[N];
		count1  = 0;
		size = N;
		inicio = fila;
		fim = &fila[N-1];
	}
	inline
	void Cenqueve(T dado){
		fila[count1] = dado;
		inicio++;
	}
	inline
	T Cdequeve(){

	}
};

#endif