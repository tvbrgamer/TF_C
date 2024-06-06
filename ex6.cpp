#include <stdio.h>
#include <stdlib.h>

void tabuada(int limite, int num){
    for(int i=1; i<=limite; i++){
        printf("%d X %d = %d \n",num,i,num*i);
    }
}

int main(void){
	int n,l;
	printf("Calculadora\n");
	printf("Escolha um numero pra listar a tabuada:\n");
	scanf("%d", &n);
	printf("Escolha um limite para a tabuada:\n");
	scanf("%d", &l);
	printf("\n");
	
	tabuada(l,n);
	return 0;	
}
