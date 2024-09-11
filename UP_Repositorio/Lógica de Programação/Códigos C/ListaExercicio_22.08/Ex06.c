// Crie um algoritmo para calcular a taxa de serviço do garçom, a partir da
// entrada do valor da conta. A taxa de serviço é fixa em 10%. O sistema deverá escrever na
// tela o valor da taxa de serviço e depois o valor total a ser pago.

#include <stdio.h>

int main()
{
    float valor_conta, valor_taxa_serv, valor_total;

    printf("\n||Pagamento da Conta do Restaurante||\n");

    printf("\nDigite o valor da conta a pagar: R$");
    scanf("%f", &valor_conta);

    valor_taxa_serv = valor_conta * 0.1;
    valor_total = valor_conta + valor_taxa_serv;

    printf("\n||Pagamento da Conta do Restaurante||\n");

    printf("\nValor da conta:                     R$%.2f\n", valor_conta);

    printf("\nValor da taxa de servico(10%%):      R$%.2f\n\n", valor_taxa_serv);

    printf("\n_______________________________________________________\n");

    printf("\nValor total a pagar:                R$%.2f\n", valor_total);

    return 0;
}