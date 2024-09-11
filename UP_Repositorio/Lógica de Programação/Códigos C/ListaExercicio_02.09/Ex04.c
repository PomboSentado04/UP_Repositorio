/*Em uma certa papelaria, até 100 folhas, a cópia do xerox custa
R$ 0,25 e, acima de 100 folhas, cada cópia adicional custa R$ 0,20. Escreva
um algoritmo que dado o número total de cópias, informe o valor a ser pago.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    float nenero;

    printf("\n||Copias do Xerox||\n");

    printf("\nDigite a quantidade de copias a serem imprimidas: ");
    scanf("%i", &quantidade);

    if (quantidade <= 0)
    {
        printf("\nQuantidade inserida invalida.\n");
        exit(1);
    }
    else if (quantidade > 0 && quantidade <= 100)
    {
        nenero = quantidade * 0.25;
    }
    else if (quantidade > 100)
    {
        nenero = 25 + ((quantidade - 100) * 0.20);
    }

    printf("\nVoce pediu o xerox de %i copias, dando um total de R$%.2f.\n", quantidade, nenero);
}