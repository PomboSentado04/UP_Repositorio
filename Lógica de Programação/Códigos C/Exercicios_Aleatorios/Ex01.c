#include <stdio.h>
#include <string.h>

int main()
{
    float conta_parcial, conta_final, gorgeta;
    printf("Digite o valor da sua conta do restaurante: R$");
    scanf("%f", &conta_parcial);
    gorgeta = 0.1 * conta_parcial;
    conta_final = gorgeta + conta_parcial;
    printf("\nO valor da gorgeta ficou em R$%.2f, entao o valor total a se pagar e R$%.2f.", gorgeta, conta_final);

    return 0;
}