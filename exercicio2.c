#include <stdio.h>

int main(void){
    // variáveis
    int i;
    int vetor[8];
    int soma = 0;

    // entrada de dados
    for(i = 0; i < 8; i++){
        printf("Digite um valor: ");
        scanf ("%i", &vetor[i]);
    }
    //processamento
    for(i = 0; i < 8; i++){
        soma += vetor[i];
    }
    //saida de dados
    printf("Soma dos vetores: %d ", soma);


    return 0;
}