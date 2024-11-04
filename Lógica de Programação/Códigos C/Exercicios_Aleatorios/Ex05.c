#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, o = 1;

    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &n);

    n++;

    for (i = 1; i <= n; i++)
    {
        for (i = 1; i <= o; i++)
        {
            printf("*");
        }
        printf("\n");
        
        o++;
    }
}