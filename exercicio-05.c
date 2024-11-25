#include <stdio.h>
#include <stdlib.h>

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
    float soma = 0.0;

    printf("Quantos produtos voc� deseja cadastrar? ");
    scanf("%d", &quantidade);

    if (quantidade > MAX_PRODUTOS)
    {
        printf("Voc� pode cadastrar no m�ximo %d produtos.\n", MAX_PRODUTOS);
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
        soma += produtos[i].valor;
    }

    float media = soma / quantidade;
    printf("A m�dia dos pre�os dos produtos �: %.2f\n", media);

    printf("Produtos com pre�o acima da m�dia:\n");
    for (i = 0; i < quantidade; i++)
    {
        if (produtos[i].valor > media)
        {
            printf("ID: %d, Nome: %s, Valor: %.2f\n", produtos[i].id, produtos[i].nome, produtos[i].valor);
        }
    }

    return 0;
}

