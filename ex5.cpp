#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno{
	int matricula;
	char nome[100];
	float notaAV;
	float simulado1, simulado2;
}Aluno;

int main(void){
	
	int n;
	printf("Quantidade de aluno(s) a ser(em) lido(s):\n");
	scanf("%d", &n);
	
	Aluno aluno[n];
	
	for(int i=0; i<n;i++){
		
		printf("\nInforme a matricula do %d º aluno: ", i+1);
		scanf("%d", &aluno[i].matricula);
		
		printf("Informe o nome do %d º aluno: ", i+1);
		scanf("%s", &aluno[i].nome);
		
		printf("Informe a nota da AV do %d º aluno: ", i+1);
		scanf("%f", &aluno[i].notaAV);
		
		printf("Informe a nota do simulado 1 do %d º aluno: ", i+1);
		scanf("%f", &aluno[i].simulado1);
		
		printf("Informe a nota do simulado 2 do %d º aluno: ", i+1);
		scanf("%f", &aluno[i].simulado2);
					
	}
	
	for(int i=0; i<n;i++){
		printf("\n");
		printf("\nDados do aluno %d: \n",i+1);
		printf("matricula: %d \n", aluno[i].matricula);
		printf("Nome: %s \n",aluno[i].nome);
		printf("Nota da Av: %2.f\n",aluno[i].notaAV);
		printf("Nota do simulado 1: %2.f\n",aluno[i].simulado1);
		printf("Nota do simulado 2: %2.f\n",aluno[i].simulado2);
	}
	
	return 0;
}
