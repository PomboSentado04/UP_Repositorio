#include <stdio.h>
#include <string.h>

int main()
{

    int num1, num2, num3, quant, quant_total;
    num1 = 0;
    num2 = 1;
    printf("\nDigite quantos numeros de fibonachi voce quer gerar: ");
    scanf("%i", &quant_total);
    if (quant_total >= 1)
    {
        printf("\n%i\n", num1);
    }
    if (quant_total >= 2)
    {
        printf("%i\n", num2);
    }

    while (quant < (quant_total - 2))
    {
        num3 = num1 + num2;
        printf("%i\n", num3);
        num1 = num2;
        num2 = num3;

        quant++;
    }
}