#include <stdio.h>
#include <stdlib.h>

#define TAM 8

int main(void){
	// variáveis
	int soma=0, n;
	
	// entrada
	printf("Digite a quantidade: ");
	scanf("%i",&n);
	fflush(stdin);
	int numeros[n];
	
	for(int i=0;i<n;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&numeros[i]);
		fflush(stdin);
	}
	
	// processamento
	for(int i=0;i<n;i++) soma+=numeros[i];
	
	// saída
	printf("A soma e %i\n",soma);
	return 0;
}