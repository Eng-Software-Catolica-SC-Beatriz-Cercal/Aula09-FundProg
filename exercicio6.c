#include <stdio.h>

int main(void){
	// variáveis
	int i, j;
    int matriz [3][3];

	// processamento e saída
		for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
			printf("Digite um valor: [%d] [%d] ", i, j);
            scanf ("%i", &matriz[i][j]);
            fflush(stdin);

        }
    } 
		for(i = 0; i < 3; i++){
         for(j = 0; j < 3; j++){
		printf("%i ", matriz[i][j]);
	}
    printf("\n");
}
	
	return 0;
}