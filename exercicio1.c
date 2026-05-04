#include <stdio.h>

int main(void){
	// variáveis
	int i;
    int vetor[10];

	// processamento e saída
		for(i = 0; i <= 9; i++){
			printf("Digite um valor: ");
            scanf ("%i", &vetor[i]);        
            fflush(stdin);

        }
		for(i = 0; i <= 9; i++){
		printf("%i\n, ",vetor[i]);
	}
	
	
	return 0;
}