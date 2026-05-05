#include <stdio.h>

int main(void){
    // variáveis
    int i, j;
    int matriz [3][3];

    // entrada de dados
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor: [%d] [%d] ", i,j);
            scanf ("%i", &matriz[i][j]);
            fflush(stdin);

        }
    }
    //processamento e saida
   printf("Elementos da diagonal principal:");
   for (i = 0; i < 3; i++){
   printf("%d ", matriz[i][i]);
}
    printf("\n");
    return 0;
}