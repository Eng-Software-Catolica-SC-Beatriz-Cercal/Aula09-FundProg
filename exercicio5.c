#include <stdio.h>

int main(void){
    // variáveis
    int i;
    int vetor[5];
    float media;
    float soma = 0;

    // processamento e saída
    for(i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf ("%i", &vetor[i]);
    }
    for(i = 0; i < 5; i++){
        soma = soma + vetor[i];

    }
    media = soma/5;
    printf("Media dos numeros do Vetor: %d ", media);

    return 0;
}