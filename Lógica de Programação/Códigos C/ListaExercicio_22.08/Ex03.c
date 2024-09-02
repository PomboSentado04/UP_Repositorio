// Calcular o aumento que será dado a um funcionário, obtendo do usuário as seguintes informações:
// salário atual e a porcentagem de aumento. Apresentar o novo valor do salário e o valor do aumento.

#include <stdio.h>

int main()
{
    float sal_atual, por_aum, sal_novo, val_aum;

    printf("\n||Calculador de Aumento de Salario||\n");

    printf("\nDigite o valor de seu salario atual: R$");
    scanf("%f", &sal_atual);
    printf("\nDigite a porcentagem de aumento que seu salario ira receber: ");
    scanf("%f", &por_aum);

    val_aum = sal_atual * (por_aum / 100.00);

    sal_novo = sal_atual + val_aum;

    printf("\nSeu novo salario eh de R$%.2f e o valor de aumento eh de R$%.2f.\n", sal_novo, val_aum);

    return 0;
}