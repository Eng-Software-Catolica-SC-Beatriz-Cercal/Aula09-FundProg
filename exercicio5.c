#include <stdio.h>

int main(void){
    // variáveis
    int i;
    int vetor[5];
    float media = 0;
    int soma = 0;

    // processamento de dados
    for(i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf ("%i", &vetor[i]);
        fflush(stdin);

    }
    for(i = 0; i < 5; i++){
        soma += vetor[i];

    }
    media = (float) soma/5;
    //saida de dados
    printf("Media dos numeros do Vetor: %f ", media);

    return 0;
}