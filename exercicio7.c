//Construa um programa que leia uma matriz 3x3 e calcule a soma de
//todos os elementos da matriz.

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

        }
        printf("\n");
    }
    soma += matriz[i][j];
    printf("Soma: %f",soma);
    return 0;
}