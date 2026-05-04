#include <stdio.h>

int main(void){
	// variáveis
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int soma = 0;
    float media = 0; //media sempre e float

	//entrada de dados
		printf("Digite um valor: ");
         scanf ("%i", &n1);        
        fflush(stdin);

        printf("Digite um valor: ");
         scanf ("%i", &n2);        
        fflush(stdin);

        printf("Digite um valor: ");
         scanf ("%i", &n3);        
        fflush(stdin);

        printf("Digite um valor: ");
         scanf ("%i", &n4);        
        fflush(stdin);

        printf("Digite um valor: ");
         scanf ("%i", &n5);        
        fflush(stdin);

        printf("Digite um valor: ");
         scanf ("%i", &n6);        
        fflush(stdin);

        printf("Digite um valor: ");
         scanf ("%i", &n1);        
        fflush(stdin);

        printf("Digite um valor: ");
         scanf ("%i", &n7);        
        fflush(stdin);

        printf("Digite um valor: ");
         scanf ("%i", &n8);        
        fflush(stdin);

        printf("Digite um valor: ");
         scanf ("%i", &n9);        
        fflush(stdin);

        printf("Digite um valor: ");
         scanf ("%i", &n10);        
        fflush(stdin);

        //processamento
        soma = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
        media = (float)soma/10; //cast

    //saida de dados
    printf("(%i + %i + %i + %i + %i + %i + %i + %i + %i + %i)/10 ", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
	
	return 0;
}