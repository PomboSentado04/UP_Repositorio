#include <stdio.h>
#include <string.h>

int main()
{
    float ve_mes, salario;
    int num_sapato;

    printf("\nDigite o valor total das vendas do mes: ");
    scanf("%f", &ve_mes);
    printf("\nDigite o numero de par sapatos vendidos no mes: ");
    scanf("%i", &num_sapato);

    salario = (ve_mes * 0.2) + (num_sapato * 5);
    printf("\nO salario a se pagar para esse funcionario e de R$%.2f.\n", salario);

    return 0;
}