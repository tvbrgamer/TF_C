#include <stdio.h>
#include <stdlib.h>

int main(void){
	int tam;
	int par=0, impar=0;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	int vet[tam];
	
	for(int i = 0; i<tam; i++){
		printf("Digite o valor da posi��o %d : ", i);
		scanf("%d", &vet[i]);
		
		if(vet[i] % 2 ==0){
			par++;
		}else{
			impar++;
		}
	}
	
	printf("Quantidade de n�meros pares: %d\n", par);
	printf("Quantidade de n�meros �mpares: %d", impar);	
	return 0;
}
