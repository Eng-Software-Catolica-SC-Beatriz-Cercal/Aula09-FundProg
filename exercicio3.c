//Construa um programa que leia 10 números inteiros e informe qual
//é o maior valor armazenado no vetor.

#include <stdio.h>

int main(void){
    // variáveis
    int i;
    int vetor[10];

    // entrada de dados
    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf ("%i", &vetor[i]);
        fflush(stdin);

    }
    //processamento
    for(i = 0; i < 10; i++){
        
    }
    //saida de dados
    printf("Maior valor: %d ", maior);


    return 0;
}