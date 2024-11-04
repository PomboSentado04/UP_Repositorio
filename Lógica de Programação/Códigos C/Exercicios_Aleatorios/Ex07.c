#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 0, i = 0, c = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        printf("Este numero eh primo");
    }
    else
        printf("Este numero nao eh primo");
}