#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

struct Produto
{
    int id;
    char nome[50];
    float valor;
};

int main()
{
    struct Produto produtos[MAX_PRODUTOS];
    int quantidade, i;
    int idBuscado;
    float novoValor;
    int encontrado = 0;

    printf("Quantos produtos você deseja cadastrar? ");
    scanf("%d", &quantidade);

    if (quantidade > MAX_PRODUTOS)
    {
        printf("Você pode cadastrar no máximo %d produtos.\n", MAX_PRODUTOS);
        return 1;
    }

    for (i = 0; i < quantidade; i++)
    {
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", &produtos[i].id);
        printf("Digite o nome do produto %d: ", i + 1);
        scanf(" %[^\n]", produtos[i].nome);
        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valor);
    }

    printf("Digite o ID do produto cujo valor você deseja atualizar: ");
    scanf("%d", &idBuscado);

    for (i = 0; i < quantidade; i++)
    {
        if (produtos[i].id == idBuscado)
        {
            encontrado = 1;
            printf("Produto encontrado!\n");
            printf("ID: %d\n", produtos[i].id);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Valor atual: %.2f\n", produtos[i].valor);

            printf("Digite o novo valor para o produto: ");
            scanf("%f", &novoValor);
            produtos[i].valor = novoValor;
            printf("Valor atualizado com sucesso!\n");
            break;
        }
    }

    if (!encontrado)
    {
        printf("Produto com ID %d não encontrado.\n", idBuscado);
    }

    return 0;
}
