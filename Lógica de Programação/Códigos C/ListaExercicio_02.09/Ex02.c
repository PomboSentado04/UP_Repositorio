/*Escreva um programa que leia dois números inteiros A e B do
teclado e imprima as mensagens “nulo”, “sinal negativo” ou “sinal positivo”,
conforme o resultado da multiplicação de A por B.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int A, B, res;
    char nome[20];

    printf("\n||Sinais em Multiplicacao de Numeros Inteiros||\n");
    printf("\nDigite o valor do numero A: ");
    scanf("%i", &A);
    printf("\nDigite o valor do numero B: ");
    scanf("%i", &B);

    res = A * B;

    if (res > 0)
    {
        strcpy(nome, "sinal positivo");
    }
    else if (res < 0)
    {
        strcpy(nome, "sinal negativo");
    }
    else if (res == 0)
    {
        strcpy(nome, "nulo");
    }

    printf("\nO resultado da multiplicacao desses numeros eh/possui %s.\n", nome);
}
