#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, subtracao, multi, div;

    printf("Calculadora faz tudo\n");
    printf("Digite primeiro numero.\n");
    scanf("%i", &num1);
    printf("digite segundo numero.\n");
    scanf("%i", &num2);


    soma = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf( " A soma e: %i \n", soma );
    printf( "A Subtracao e: %i \n", subtracao );
    printf( "A Mulplicacao e: %i \n", multi );
    printf( "A divisao e: %i \n", div );
    return 0;
}
