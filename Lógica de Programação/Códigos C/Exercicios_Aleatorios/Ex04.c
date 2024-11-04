#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;

    n = 1;

    while (n != 0)
    {
        n = 1;

        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d", &n);

        if (n >= 0)
        {
            for (i = 1; i <= n; i++)
            {
                printf("*");
            }
        }
        else
            printf("\nValor invalido.\n");
    }
}