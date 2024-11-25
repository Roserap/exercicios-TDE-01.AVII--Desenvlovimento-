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
    float valorLimite;
    int contador = 0;


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

    printf("Digite o valor limite: ");
    scanf("%f", &valorLimite);


    for (i = 0; i < quantidade; i++)
    {
        if (produtos[i].valor < valorLimite)
        {
            contador++;
        }
    }

    printf("Número de produtos com valor abaixo de %.2f: %d\n", valorLimite, contador);

    return 0;
}

