#include <stdio.h>

int main(void){
    // variáveis
    int i, par = 0, impar = 0;
    int vetor[10];

    // entrada de dados
    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf ("%i", &vetor[i]);
        fflush(stdin);

    }
    //processamento
    for(i = 0; i < 10; i++){
        if (vetor[i]%2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    //saida de dados
    printf("Pares: %d\n", par);
    printf("Impares: %d\n", impar);


    return 0;
}
