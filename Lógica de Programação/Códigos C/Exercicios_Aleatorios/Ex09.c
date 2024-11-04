#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int matriz[4][4];

    int num;

    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("\nDigite um valor inteiro: ");
            scanf("%d", &num);
            matriz[l][c] = num;
        }
    }

    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("\nO numero na casa[%d][%d] eh %d\n", l, c, matriz[l][c]);
        }
    }

    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            if (l == c)
            {
                printf("\nO numero na casa diagnonal[%d][%d] eh %d\n", l, c, matriz[l][c]);
            }
        }
    }
}