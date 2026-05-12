#include <stdio.h>
//poderia usar tam #define
int main(void){
    // variáveis
    int i, j;
    int matriz [4][4];
    int contador = 0;


    // entrada de dados
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor: ");
            scanf ("%i", &matriz[i][j]);
            fflush(stdin);

        }
    }
    //processamento e saida
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] > 10){
                contador++;
            }
        }
    }
    printf("Quantidade de elementos maiores que 10: %d", contador);
    return 0;
}
