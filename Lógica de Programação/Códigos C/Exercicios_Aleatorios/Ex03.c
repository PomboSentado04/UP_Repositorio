#include <stdio.h>
#include <string.h>

int main()
{

    int fat1, fat2, prod = 0;

    do
    {
        printf("\nDigite o primeiro fator: ");
        scanf("%i", &fat1);
        printf("\nDigite o segundo fator: ");
        scanf("%i", &fat2);

        prod = fat1 * fat2;

        printf("\nProduto entre os dois fatores: %i\n", prod);
        printf("\n------------------------------------------\n");

    } while (prod <= 100);

    printf("\nO produto ultrapassou 100.\n");
}