#include <iostream>
#include <time.h>
#include <string.h>
#include "exercicio3.h"

using namespace std;

void Vetores::setVetor(){
	int j = 0, valor;
	srand(time(NULL));

	valor = 0;
	vetor[0] = valor;					//sempre 0 na primeira posicao
	for(int i = 1; i < TAM; i++){
		valor = rand() % TAM + valor;	//novo valor aleatorio somado ao valor antigo, garantido a caracteristica de sequencia
		vetor[i] = valor;
		if(i % 2 == 1){					//se o indice for impar o vetor impar também recebe o valor
			vetorImpar[j] = valor;
			j++;
		}
	}
}

void Vetores::escreverVetor(){
	FILE *fp = fopen("vetor.txt", "w");	//ponteiro para arquivo, cria
	char ch, texto[6] = {"Vetor"};	//caractere para escrita e o texto a ser colocado antes do vetor
	int i = 0;

	if(!fp){
		cout<<"ERRO_Vetor: ao criar/modificar arquivo."<<endl;
	}
	else{
		cout<<"Vetor: Arquivo criado/modificado com sucesso."<<endl;
	}

	strcat(texto, "\n");	//concaena uma quebra de linha ao final do exto colocado
	do{
		ch = texto[i];	//recebe caractere
		fputc(ch, fp);	//escreve o caractere recebido no arquivo
		i++;
	}while(ch != '\n');	//para quando achar quebra de linha

	for( i = 0; i <= TAM; i++){
		if(i < TAM){
			fprintf(fp, "%d ", vetor[i]); //escre o numero no arquivo no padra numero espaco
		}
		else{
			ch = '\n';	//quando chegar ao final do vetor, quebra linha para poder colocar o vetor impar na linha abaixo
			fputc(ch, fp);
		}
	}	
}

void Vetores::escreverVetorImpar(){
	FILE *fp = fopen("vetor.txt", "a");	//abre arquivo para modificar o final
	char ch, texto[12] = {'V','e','t','o','r',' ','I','m','p','a','r'};	//texto a ser colocado antes do vetor impar
	int i = 0;

	if(!fp){
		cout<<"ERRO_Vetor_Impar: ao criar/modificar arquivo."<<endl;
	}
	else{
		cout<<"Vetor Impar: Arquivo criado/modificado com sucesso."<<endl;
	}

	strcat(texto, "\n");	//concaena uma quebra de linha ao final do exto colocado
	do{
		ch = texto[i];	//recebe caractere
		fputc(ch, fp);	//escreve o caractere recebido no arquivo
		i++;
	}while(ch != '\n');	//para quando achar quebra de linha

	for(i = 0; i <= TAM/2; i++){
		if(i < TAM/2){
			fprintf(fp, "%d ", vetorImpar[i]);	//escre o numero no arquivo no padra numero espaco
		}
		else{
			ch = '\n';	//quando chegar ao final do vetor, quebra linha para poder colocar o vetor impar na linha abaixo
			fputc(ch, fp);
		}
	}	
}

int Vetores::somaVetor(){
	int soma1 = 0;

	for(int i = 0; i < TAM; i++){
		soma1 = soma1 + vetor[i];
	}

	return soma1;
}

int Vetores::somaVetorImpar(){
	int soma2 = 0;

	for(int i = 0; i< TAM/2; i++){
		soma2 = soma2 + vetorImpar[i];
	}

	return soma2;
}

void Vetores::showVetor(){
	int i = 0;
	while(i < TAM){
		cout<<vetor[i]<<' ';
		i++;
	}
	cout<<endl;
}

void Vetores::showVetorImpar(){
	int i = 0;
	while(i < TAM/2){
		cout<<vetorImpar[i]<<' ';
		i++;
	}
	cout<<endl;
}