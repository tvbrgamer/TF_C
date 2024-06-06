#include <stdio.h>
#include <stdlib.h>
int main(void){

	int vet[10];
	int Ref,maior=0, igual=0;;

	for(int i=0;i<10;i++){
		printf("\nDigite o numero %d:\n", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("\n");
	printf("Digite o num de referencia:\n");
	scanf("%d", &Ref);
	
	for(int i=0;i<10;i++){
		if(vet[i] == Ref){
			igual++;
		}
		else if(vet[i] > Ref){
			maior++;
		}
	}
	
	printf("\nVezes maior que a referencia: %d", maior);
	printf("\nVezes igual a referencia: %d", igual);
	
	return 0;
}
