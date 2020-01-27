#ifndef __EXERCICIO1_
#define __EXERCICIO1_
#define TAM 10

class VetorOperacao{

private:
	int vet[TAM];
	int valor;
public:
	VetorOperacao(int v[], int val);

	inline 
	void setValor(int num){
		valor = num;
	}
	inline
	void setVetPos(int pos, int dado){
		vet[pos] = dado;
	}
	inline
	void setVet(int v[]){
		int i;
		for(i = 0; i < TAM; i++){
			vet[i] = v[i];
		}
	}
	inline
	void soma(){
		for(int i = 0; i < TAM; i++){
			vet[i] = vet[i] + valor;
		}
	}

	void inverter();
	void raiz();
	void show();
};

#endif