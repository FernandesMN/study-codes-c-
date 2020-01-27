#ifndef __EXERCICIO3_
#define __EXERCICIO3_
#define TAM 10

class Vetores{

private:
	int vetor[TAM];			//vetor
	int vetorImpar[TAM/2];	//vetor impar com metade do tamanho já que ele só recebe valores dos indices impares do primeiro
public:
	Vetores(){					//CONSTRUTOR
		setVetor();				
	}

	void setVetor();			//Preenche o vetor com valores sequenciais a partir de 0 e o vetor impar
	void escreverVetor();		//cria/escreve o vetor no arquivo de texto
	void escreverVetorImpar();	//modifica o arquivo de texto para inserir o vetor impar
	
	int somaVetor();			//soma os valores do vetor
	int somaVetorImpar();		//soma os valores do vetor impar
	
	void showVetor();			//exibe o vetor na tela
	void showVetorImpar();		//exibe o vetor impar na tela
};

#endif