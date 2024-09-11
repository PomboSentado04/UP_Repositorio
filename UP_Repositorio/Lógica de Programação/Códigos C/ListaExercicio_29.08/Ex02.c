// Faça um programa que leia um número inteiro e imprima se é par ou ímpar, usando o comando switch.

#include <stdio.h>

int main()
{
    int numero, definidor;
    printf("\n||Definidor de Numero Par e Impar||\n");

    printf("\nDigite um numero inteiro: ");
    scanf("%i", &numero);

    definidor = numero % 2;

    switch (definidor)
    {
    case 0:
        printf("\nO numero %i eh par.\n", numero);
        break;

    case 1:
        printf("\nO numero %i eh impar.\n", numero);
        break;

    case -1:
        printf("\nO numero %i eh impar.\n", numero);
        break;
    }
}