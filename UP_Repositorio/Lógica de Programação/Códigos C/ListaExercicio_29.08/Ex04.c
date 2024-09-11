// Em uma loja de eletrodomésticos, as compras têm um preço à vista, ou acréscimo de 10 % para
// pagamentos em 2 vezes, ou ainda, acréscimo de 20% para pagamento em 3 vezes.
// O algoritmo deve pedir para o usuário digitar o valor da compra à vista e a opção de compra.
// O algoritmo deve exibir qual o valor final a ser pago.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    int numero;

    printf("\n||Produtos Parcelados e com Juros||\n");

    printf("\n Digite o preco a vista do produto: R$");
    scanf("%f", &valor);

    printf("\n Digite em quantas vezes quer pagar o produto(maximo 3 vezes): ");
    scanf("%i", &numero);

    if (numero != 1 && numero != 2 && numero != 3)
    {
        printf("\nValor invalido.\n");
        exit(1);
    }

    switch (numero)
    {
    case 2:
        valor = valor * 1.1;
        break;

    case 3:
        valor = valor * 1.2;
        break;
    }

    printf("\nO valor total a se pagar eh de R$%.2f.\n", valor);
}