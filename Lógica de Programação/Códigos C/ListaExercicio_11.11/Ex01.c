/*Crie uma função que preencha um vetor de mil posições com
valores aleatórios de 1 até 6. Conte quantas vezes cada número foi sorteado.
Em seguida, exiba a porcentagem de vezes em que cada número foi sorteado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher_vetor(int *vetor)
{
    int quant[6] = {0};
    srand(time(NULL));

    for (int i = 0; i < 1000; i++)
    {
        vetor[i] = rand() % 6 + 1;
        switch (vetor[i])
        {
        case 1:
            quant[0]++;
            break;

        case 2:
            quant[1]++;
            break;

        case 3:
            quant[2]++;
            break;

        case 4:
            quant[3]++;
            break;

        case 5:
            quant[4]++;
            break;

        case 6:
            quant[5]++;
            break;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("Quantidade de %d sorteados: %d\n", i + 1, quant[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("Porcentagem de %d sorteados: %.1f%%\n", i + 1, (quant[i] / 1000.0) * 100.0);
    }
}

int main()
{
    int vetor[1000];

    preencher_vetor(vetor);
}