// Faça um programa que efetue o cálculo do salário líquido de um professor.
// Os dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS.

#include <stdio.h>

int main()
{
    float valor_ha, aulas_mes, desc_INSS, salario;

    printf("\n||Calculador de Salário de Professor||\n");

    printf("\nDigite o valor do hora aula do professor: R$");
    scanf("%f", &valor_ha);

    printf("\nDigite o numero de aulas dadas no mes: ");
    scanf("%f", &aulas_mes);

    printf("\nDigite o percentual de desconto do INSS: ");
    scanf("%f", &desc_INSS);

    salario = valor_ha * aulas_mes - (valor_ha * aulas_mes * (desc_INSS / 100.00));

    printf("\nO valor do salario bruto desse professor eh de R$%.2f.\n\n", salario);

    return 0;
}