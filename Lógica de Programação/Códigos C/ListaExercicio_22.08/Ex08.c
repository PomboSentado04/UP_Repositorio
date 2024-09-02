// Você está endividado e quer administrar melhor sua vida financeira.
// Para isso, faça um programa que recebe o valor de uma dívida e o juro mensal, então calcule e
// imprima o valor da dívida no mês seguinte.

#include <stdio.h>

int main()
{
    float divida, juro_mes, divida_seguinte;

    printf("\n||Calculador de Divida no Mes Seguinte||\n");

    printf("\nDigite o valor atual de sua divida: R$");
    scanf("%f", &divida);

    printf("\nDigite a porcentagem do juro mensal: ");
    scanf("%f", &juro_mes);

    divida_seguinte = divida * (1 + (juro_mes / 100.00));

    printf("\nO valor de sua divida no mes seguinte sera de R$%.2f.\n\n", divida_seguinte);

    return 0;
}