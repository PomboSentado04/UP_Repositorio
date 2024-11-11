#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int divisores(int num)
{
    int sdiv = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sdiv = sdiv + i;
        }
    }

    return sdiv;
}

void numero_perfeito(int num, int divi)
{
    if (num == divi)
    {
        printf("A soma dos divisores do numero %d eh igual a %d, portanto eh um numero perfeito.", num, divi);
    }
    else
    {
        printf("A soma dos divisores do numero %d eh igual a %d, portanto nao ah um numero perfeito.", num, divi);
    }
}

int main()
{
    int num;

    printf("Escreva um numero inteiro: ");
    scanf("%d", &num);

    numero_perfeito(num, divisores(num));
}