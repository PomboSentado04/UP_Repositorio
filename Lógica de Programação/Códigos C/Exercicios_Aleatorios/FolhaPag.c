#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    int num_depend;
    float sal_bruto;
    float sal_extra;
    float sal_total;
    char VT;
    char plano_saude;

} usuario;

void calcular_VT(float *salario_bruto, float *salario_total)
{
    int dias_trab;
    float desconto;
    printf("\nInforme quantos dias uteis voce trabalha no mes: ");
    scanf("%d", &dias_trab);

    if (dias_trab < 0)
    {
        dias_trab = 0;
    }

    desconto = dias_trab * 6.0;

    if (desconto > (*salario_bruto * 0.06))
    {
        desconto = *salario_bruto * 0.06;
    }

    *salario_total = *salario_total - desconto;

    printf("\nSeu vale transporte ficou no valor de R$%.2f, isso foi descontado de seu salario e agora ele vale R$%.2f.", desconto, *salario_total);
}

void calcular_plano_saude(int *numero_dependentes, float *salario_total)
{
    int escolha;
    float desconto, plano;

    do
    {
        printf("\nEscolha entre essas duas opcoes de plano de saude:\n1 - Enfermaria: desconto de R$89.90 por pessoa;\n2 - Quarto: desconto de R$119.90 por pessoa.\n");
        scanf("%d", &escolha);
    } while (escolha != 1 && escolha != 2);

    switch (escolha)
    {
    case 1:
        plano = 89.9;
        break;

    case 2:
        plano = 119.9;
        break;
    }

    desconto = (*numero_dependentes + 1) * plano;

    *salario_total = *salario_total - desconto;

    printf("\nO plano de saude seu e dos seus dependentes ficou em R$%.2f, isso foi descontado de seu salario e agora ele vale R$%.2f.", desconto, *salario_total);
}

void calcular_FGTS(float *salario_bruto, float *salario_extra)
{
    printf("\nO valor do seu FGTS eh de R$%.2f por mes.", (*salario_bruto + *salario_extra) * 0.08);
}

void calcular_INSS(float *salario_bruto, float *salario_extra, float *salario_total)
{
    float desconto, aliquota;

    if ((*salario_bruto + *salario_extra) >= 3305.23)
    {
        aliquota = 0.14;
    }
    else if ((*salario_bruto + *salario_extra) < 3305.23 && (*salario_bruto + *salario_extra) >= 2203.49)
    {
        aliquota = 0.12;
    }
    else if ((*salario_bruto + *salario_extra) < 2203.49 && (*salario_bruto + *salario_extra) >= 1100.01)
    {
        aliquota = 0.09;
    }
    else
    {
        aliquota = 0.075;
    }

    desconto = (*salario_bruto + *salario_extra) * aliquota;

    *salario_total = *salario_total - desconto;

    printf("\nO valor de seu INSS ficou em R$%.2f, isso foi descontado de seu salario e agora ele vale R$%.2f.", desconto, *salario_total);
}

void calcular_salario_familia();

void calcular_IR();

void calcular_salario_liquido();

int main()
{
    usuario funcionarios[3];

    fflush(stdin);

    for (int i = 0; i < 3; i++)
    {
        printf("\nUsuario %d:\n", i + 1);

        // Coleta de informações

        printf("\nInforme a quantidade de dependentes que voce possui: ");
        scanf("%d", &funcionarios[i].num_depend);

        if (funcionarios[i].num_depend < 0)
        {
            funcionarios[i].num_depend = 0;
        }

        printf("\nInforme o valor de seu salario bruto(R$): ");
        scanf("%f", &funcionarios[i].sal_bruto);

        if (funcionarios[i].sal_bruto < 0)
        {
            funcionarios[i].sal_bruto = 0;
        }

        printf("\nInforme o valor do seu salario extra ou gratificacao(R$). Se nao houver um extra, digitar 0: ");
        scanf("%f", &funcionarios[i].sal_extra);

        if (funcionarios[i].sal_extra < 0)
        {
            funcionarios[i].sal_extra = 0;
        }

        funcionarios[i].sal_total = funcionarios[i].sal_bruto + funcionarios[i].sal_extra;

        do
        {
            printf("\nInforme se ira utilizar ou nao o vale transporte(S/N): ");
            scanf(" %c", &funcionarios[i].VT);
            funcionarios[i].VT = toupper(funcionarios[i].VT);
        } while (funcionarios[i].VT != 'S' && funcionarios[i].VT != 'N');

        do
        {
            printf("\nInforme se ira utilizar ou nao o plano de saude oferecido pela empresa(S/N): ");
            scanf(" %c", &funcionarios[i].plano_saude);
            funcionarios[i].plano_saude = toupper(funcionarios[i].plano_saude);
        } while (funcionarios[i].plano_saude != 'S' && funcionarios[i].plano_saude != 'N');

        // Calculos

        if (funcionarios[i].VT == 'S')
        {
            calcular_VT(&funcionarios[i].sal_bruto, &funcionarios[i].sal_total);
        }

        if (funcionarios[i].plano_saude == 'S')
        {
            calcular_plano_saude(&funcionarios[i].num_depend, &funcionarios[i].sal_total);
        }

        calcular_FGTS(&funcionarios[i].sal_bruto, &funcionarios[i].sal_extra);

        calcular_INSS(&funcionarios[i].sal_bruto, &funcionarios[i].sal_extra, &funcionarios[i].sal_total);
    }

    return 0;
}