// Sabe-se que, para iluminar de maneira correta os cômodos de uma casa,
// para cada m² deve-se usar 18W de potência. Faça um programa que recebe as duas
// dimensões de um cômodo (em metros), calcule e mostre a sua área (em m²) e a potência
// de iluminação em watts que deverá ser usada.

#include <stdio.h>

int main()
{
    float largura, comprimento, area, pot_usada;

    printf("\n||Calculador de Potencia Utilizada para Iluminar Comodos||\n");

    printf("\nDigite a largura do comodo em metros: ");
    scanf("%f", &largura);

    printf("\nDigite o comprimento do comodo em metros: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    pot_usada = area * 18;

    printf("\nA area desse comodo eh de %.3f metros quadrados.\n", area);
    printf("\nE a potencia de iluminacao usada nele devera ser de %.3f watts.\n\n", pot_usada);

    return 0;
}