//Construa um programa que leia uma matriz 3x3 e exiba apenas os
//elementos da diagonal principal.

#include <stdio.h>

int main(void){
    // variáveis
    int i, j;
    int matriz [3][3];

    // processamento e saída
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor: ");
            scanf ("%i", &matriz[i][j]);
            fflush(stdin);

        }
    }
   printf("Elementos da diagonal principal:");
   for (i =0; i < 3; i++){
   printf("%d ", matriz[i][i]);
}
    printf("\n");
    return 0;
}