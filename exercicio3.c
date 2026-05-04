#include <stdio.h>

int main(void){
    // variáveis
    int i;
    int vetor[10];
    int maior;

    // entrada de dados
    for(i = 0; i <= 9; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        fflush(stdin);

    }

    // processamento
    maior = vetor[0]; 

    for(i = 1; i <= 9; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    // saída de dados
    printf("Maior valor: %d\n", maior);

    return 0;
}