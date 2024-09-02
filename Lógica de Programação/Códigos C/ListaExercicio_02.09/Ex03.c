/*Leia 2 valores inteiros (A e B). Após, o programa deve mostrar
uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os
valores lidos são múltiplos entre si.*/

#include <stdio.h>

int main()
{
    int A, B;

    printf("\n||Multiplos de Numeros||\n");

    printf("\nDigite o valor do numero A: ");
    scanf("%i", &A);
    printf("\nDigite o valor do numero B: ");
    scanf("%i", &B);

    if ((A % B) == 0 && B != A)
    {
        printf("\nEsses numeros sao multiplos, sendo A multiplo de B.\n");
    }
    else if ((B % A) == 0 && B != A)
    {
        printf("\nEsses numeros sao multiplos, sendo B multiplo de A.\n");
    }
    else if (B == A)
    {
        printf("\nEsses numeros sao multiplos entre si, ja que sao numeros iguais.\n");
    }
    else
    {
        printf("\nEsses numeros nao sao multiplos.\n");
    }
}