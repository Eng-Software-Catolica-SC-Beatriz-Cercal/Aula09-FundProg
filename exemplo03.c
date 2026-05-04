/* uso de vetor */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int vetor[10];
	int soma=0;
	float media;
	
	// entrada
	for(int i=0;i<=9;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&vetor[i]);
		fflush(stdin);
	}
	
	// processamento
	for(int i=0;i<=9;i++) soma+=vetor[i];
	media=(float)soma/10;
	
	// saída
	printf("%f = (",media);
	for(int i=0;i<=8;i++){
		printf("%i + ",vetor[i]);
	}
	printf("%i)/10\n",vetor[9]);
	return 0;
}