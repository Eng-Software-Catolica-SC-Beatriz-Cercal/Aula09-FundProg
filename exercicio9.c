#include <stdio.h>

int main(void){
    // variáveis
    int i, j;
    int matriz1 [2][2];
    int matriz2 [2][2];
    int matriz3 [2][2];


    // entrada de dados
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite um valor: ");
            scanf ("%i", &matriz1[i][j]);
            fflush(stdin);

        }
    }
     // entrada de dados
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite um valor: ");
            scanf ("%i", &matriz2[i][j]);
            fflush(stdin);

        }
    }
    //processamento e saida
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }
    return 0;
}