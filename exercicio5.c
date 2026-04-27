//Construa um programa que leia 5 números reais, armazene em um
//vetor e calcule a média dos valores informados.

#include <stdio.h>

int main(void){
	// variáveis
	int i;
    int vetor[5];
    float media;

	// processamento e saída
		for(i = 0; i < 5; i++){
			printf("Digite um valor: ");
            scanf ("%i", &vetor[i]);
        }
		for(i = 0; i < 5; i++){
		printf("%i\n, ",vetor[i]);
            vetor[i]++;

	}
    media = vetor[i]/5;
    printf("Media dos numeros do Vetor: ", media);
	
	return 0;
}