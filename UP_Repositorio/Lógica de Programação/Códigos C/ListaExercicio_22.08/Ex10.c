// Antes de o racionamento de energia ser decretado, quase ninguém falava em
// quilowatts; mas, agora, todos incorporaram essa palavra em seu vocabulário. Sabendo-se
// que 100 quilowatts de energia custa um sétimo do salário mínimo, faça um programa que
// receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência e imprima:

#include <stdio.h>

int main()
{
    float KW, Sal_Min, Val_KW, Val_Pagar;

    printf("\n||Calculador de Conta de Energia Eletrica||\n");

    printf("\nDigite o valor do salario minimo: R$");
    scanf("%f", &Sal_Min);

    printf("\nDigite o valor gasto em quilowatts pela residencia: ");
    scanf("%f", &KW);

    Val_KW = (Sal_Min / 7.0) / 100.0;

    Val_Pagar = Val_KW * KW;

    printf("\nValor a pagar por KW: R$%.2f\n", Val_KW);
    printf("\nValor total a pagar pela conta de enegia: R$%.2f\n", Val_Pagar);

    return 0;
}