// Escreva um algoritmo que calcule e apresente na tela o resultado de C = ( A + B ) x B.

#include <stdio.h>

int main()
{

    float a, b, c;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("\nDigite o valor de B: ");
    scanf("%f", &b);

    c = (a + b) * b;

    printf("\nDe acordo com a formula C = ( A + B ) x B, C = %f", c);

    return 0;
}