#include <stdio.h>
#include <stdlib.h>
int main(void){
	int jovem=0, adulto=0, idoso=0;
	int num;
	
	printf("Quantas pessoas serao entrevistadas?\n");
	scanf("%d", &num);
	
	int vet[num];
	
	for(int i =0; i<num; i++){

		printf("Idade da pessoa %d :\n", i+1);
		scanf("%d", &vet[i]);
		
		if(vet[i] >= 18 && vet[i]< 35){
			jovem++;
		}else if(vet[i] >= 35 && vet[i] < 65){
			adulto++;
		}
		else if(vet[i] >= 65){
			idoso++;
		}
	}

	printf("\n");
	printf("Jovens:  %d\n", jovem);
	printf("Adultos: %d\n", adulto);
	printf("Idosos:  %d", idoso);
		
	return 0;
}
