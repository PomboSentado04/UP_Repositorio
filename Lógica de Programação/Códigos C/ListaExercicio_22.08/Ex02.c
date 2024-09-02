// Faça um programa em para calcular e imprimir o valor do volume de uma lata de óleo, utilizando a fórmula:
// volume = PI * raio² * altura

#include <stdio.h>

#define PI 3.14159265

int main()
{
    float v, r, h;

    printf("\n||Calculador de Volume de Lata Oleo||\n");

    printf("\nDigite o raio da lata em cm: ");
    scanf("%f", &r);
    printf("\nDigite o a altura da lata em cm: ");
    scanf("%f", &h);

    v = PI * r * r * h;

    printf("\nO volume da lata equivale a %.3f cm quadrados.", v);

    return 0;
}