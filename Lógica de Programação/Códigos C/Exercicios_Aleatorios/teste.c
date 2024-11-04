#include <stdio.h>
#include <string.h>

typedef struct ModeloItem
{
    char nome[50];
    char tipo[20];
    int quant;
    float valor;

} Item;

typedef struct ModeloInventario
{
    Item items[10];
    int numItem;
} Inventario;

Inventario adicionarItem(Inventario inv)
{
    if (inv.numItem >= 10)
    {
        printf("Inventário cheio.\n");
        return inv;
    }

    Item novoItem;

    printf("Digite o nome do item:\n");
    scanf("%s", novoItem.nome);

    printf("Digite o tipo do item:\n");
    scanf("%s", novoItem.tipo);

    printf("Digite a quantidade do item:\n");
    scanf("%d", &novoItem.quant);

    printf("Digite o valor do item:\n");
    scanf("%f", &novoItem.valor);

    inv.items[inv.numItem] = novoItem;
    inv.numItem++;

    return inv;
}

void checarInventario(Inventario meuInventario)
{
    int slot;
    printf("Qual slot de seu inventário você quer acessar? \n");
    scanf("%d", &slot);

    if (slot < 0 || slot >= meuInventario.numItem)
    {
        printf("Slot inválido.\n");
        return;
    }

    printf("\nItem no slot %d:\n", slot);
    printf("Nome: %s\n", meuInventario.items[slot].nome);
    printf("Tipo: %s\n", meuInventario.items[slot].tipo);
    printf("Quantidade: %d\n", meuInventario.items[slot].quant);
    printf("Valor: %.2f\n", meuInventario.items[slot].valor);
}

int main()
{
    Inventario meuInventario = {.numItem = 0};

    int escolha = 0;

    while (escolha != 3)
    {
        printf("\n");
        printf("O que você deseja fazer?\n");
        printf("1- Adicionar Item\n2- Checar inventário\n3- Sair\n");
        scanf("%d", &escolha);
        printf("\n");

        switch (escolha)
        {
        case 1:
            meuInventario = adicionarItem(meuInventario);
            break;

        case 2:
            checarInventario(meuInventario);
            break;

        case 3:
            printf("Saindo...\n");
            break;

        default:
            printf("Escolha inválida. Tente novamente.\n");
            break;
        }
    }
    return 0;
}