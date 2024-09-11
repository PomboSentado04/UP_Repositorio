// Escreva um programa que receba um caractere e verifique se ele é uma vogal ou uma consoante.

#include <stdio.h>
#include <ctype.h>

int main()
{

    char letra;

    printf("\n||Definidor de Vogal e Consoante||\n");

    printf("\nDigite uma letra: ");
    scanf("%c", &letra);

    letra = toupper(letra);

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        printf("\nA letra %c eh uma vogal.\n", letra);
    }
    else
    {
        printf("\nA letra %c eh uma consoante.\n", letra);
    }

    return 0;
}