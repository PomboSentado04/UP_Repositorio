// Escreva um programa que receba um número inteiro de 1 a 7 e exiba o dia da semana correspondente.

#include <stdio.h>

int main()
{
    int dia;

    printf("\n||Definidor de Dia da Semana||\n");

    while (dia < 1 || dia > 7)
    {
        printf("\nDigite um numero de 1 a 7: ");
        scanf("%i", &dia);

        if (dia < 1 || dia > 7)
        {
            printf("\nEsse numero nao eh valido, digite outro.\n");
        }
    }

    switch (dia)
    {
    case 1:
        printf("\nEsse numero corresponde a Segunda-Feira.\n");
        break;

    case 2:
        printf("\nEsse numero corresponde a Terca-Feira.\n");
        break;

    case 3:
        printf("\nEsse numero corresponde a Quarta-Feira.\n");
        break;

    case 4:
        printf("\nEsse numero corresponde a Quinta-Feira.\n");
        break;

    case 5:
        printf("\nEsse numero corresponde a Sexta-Feira.\n");
        break;

    case 6:
        printf("\nEsse numero corresponde a Sabado.\n");
        break;

    case 7:
        printf("\nEsse numero corresponde a Domingo.\n");
        break;
    }
}