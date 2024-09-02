// Escreva um algoritmo que leia o valor total devido por um cliente,
// quantidade de dias de atraso e percentual de multa por dia de atraso.
// Aplique a porcentagem de multa pelo atraso do pagamento e imprima o valor total devido.

#include <stdio.h>
#include <math.h>

int main()
{
    float valor_devido, perc_multa_dia, valor_total_devido_simp, valor_total_devido_comp, dias_atrasados;
    int juros;

    printf("\n||Calculador de Pagamento de Divida Atrasada||\n");

    printf("\nDigite o valor de sua divida: R$");
    scanf("%f", &valor_devido);

    printf("\nDigite a quantidade de dias atrasados: ");
    scanf("%f", &dias_atrasados);

    printf("\nDigite o percentual de multa por dia de atraso: ");
    scanf("%f", &perc_multa_dia);

    while (juros != 1 && juros != 2)
    {
        printf("\nDigite 1 caso juros simples, digite 2 caso juros compostos: ");
        scanf("%i", &juros);
    }

    dias_atrasados = trunc(dias_atrasados);

    switch (juros)
    {
        case 1:
            valor_total_devido_simp = valor_devido + (valor_devido * dias_atrasados * (perc_multa_dia / 100.00));
            printf("\nValor total da divida: R$%.2f\n", valor_total_devido_simp);
        break;

        case 2:
            valor_total_devido_comp = valor_devido * pow(((perc_multa_dia / 100.00) + 1), dias_atrasados);
            printf("\nValor total da divida: R$%.2f\n\n", valor_total_devido_comp);
        break;
        
    }
    return 0;
}