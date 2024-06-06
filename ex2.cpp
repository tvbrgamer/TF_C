#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n=10, valor=0,ValorNOZero=0, num;
	
	for(int i=0;i<10;i++){
		printf("Digite o %d valor:\n", i+1);
		scanf("%d", &num);
		
		if(num % 3 == 0 && num % 5 == 0){
			valor++;
		}
		if(num != 0 && num % 3 == 0 && num % 5 == 0){
			ValorNOZero++;
		}
	}
	
	printf("Existem %d numero(s) divisíveis por 3 e 5\n", valor);
	printf("Existem %d numero(s) divisíveis por 3 e 5 (sem contar o zero)", ValorNOZero);
	return 0;
}
