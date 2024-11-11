#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao(int *x, int *y)
{
    printf("\na: %d, b: %d\n", *x, *y);

    *x = 10;
    *y = 80;

    printf("\na: %d, b: %d\n", *x, *y);
}

int main()
{
    int a = 2, b = 3;

    printf("\na: %d, b: %d\n", a, b);

    funcao(&a, &b);

    printf("\na: %d, b: %d\n", a, b);

    return 0;
}