// Faça um programa que leia dois números reais, um será o valor de um
// produto e outro o valor de desconto que esse produto está recebendo.
// Imprima quantos reais o produto custa na promoção.

#include <stdio.h>

int main()
{
    float valor_prod, desconto, valor_promo;

    printf("\n||Calculador de Promocao de Produto||\n");

    printf("\nDigite o valor normal do produto: R$");
    scanf("%f", &valor_prod);

    printf("\nDigite o valor do desconto: R$");
    scanf("%f", &desconto);

    valor_promo = valor_prod - desconto;

    if (valor_promo < 0)
    {
        valor_promo = 0;
    }

    printf("\nO produto custa na promocao R$%.2f.\n\n", valor_promo);

    return 0;
}