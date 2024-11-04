#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int vet[9];
    int ult, i, count = 9;

    for (i = 0; i < count; i++)
    {
        printf("Digite o valor do numero da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nTranferindo os valores para as posicoes seguintes...\n");

    ult = vet[8];

    for (i = 8; i > 0; i--)
    {
        vet[i] = vet[i - 1];
    }

    vet[0] = ult;

    printf("{");

    for (i = 0; i < count; i++)
    {
        printf("%d,", vet[i]);
    }

    printf("}");
}