#ifndef __EXERCICIO5_
#define __EXERCICIO5_

typedef int *pMatriz;

class Matriz{

private:
	int dim;	//dimensao da matriz
	int 	*valores;	//ponteiro que sera usado como vetor para os valores
	pMatriz *linhas;	//ponteiro de ponteiro ou vetor de ponteiros para o inicio de cada "linha" de valores
public:
	  Matriz(int d);	//CONSTRUTOR com dimensao como parametro
	 ~Matriz();

	void inicializa();	//coloca valores iniciais nulos
	void libera();	//"destroi" as alocacoes e inicializa com nulos
	void dimensiona(int d);	//aloca memoria para os vetores e define posicoes das linhas
	void preenche(int n);	//preenche o vetor de valores de forma aleatoria
	void transposicao();
	void show(int largura);	//imprime na tela com uma determinada largura
};

#endif