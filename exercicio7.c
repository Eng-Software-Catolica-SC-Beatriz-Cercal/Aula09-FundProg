#include <stdio.h>

int main(void){
    // variáveis
    int i, j;
    int matriz [3][3];
    int soma = 0;

    // processamento e saída
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor: ");
            scanf ("%i", &matriz[i][j]);
            fflush(stdin);

        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }
    printf("Soma: %d\n", soma);
    return 0;
}