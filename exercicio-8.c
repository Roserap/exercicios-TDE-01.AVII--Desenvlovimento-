#include <stdio.h>
#include <stdlib.h>

#define MAX_CLUBES 10


struct Clube
{
    int id;
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int gols_pro;
    int gols_contra;
};

int main()
{
    struct Clube clubes[MAX_CLUBES];
    int quantidade, i;
    int soma_gols_pro = 0;

    printf("Quantos clubes voc� deseja cadastrar (m�ximo %d)? ", MAX_CLUBES);
    scanf("%d", &quantidade);

    if (quantidade > MAX_CLUBES)
    {
        printf("Voc� pode cadastrar no m�ximo %d clubes.\n", MAX_CLUBES);
        return 1;
    }

    for (i = 0; i < quantidade; i++)
    {
        printf("\nCadastro do Clube %d:\n", i + 1);
        printf("Digite o ID do clube: ");
        scanf("%d", &clubes[i].id);
        printf("Digite o nome do clube: ");
        scanf(" %[^\n]", clubes[i].nome);
        printf("Digite o n�mero de vit�rias: ");
        scanf("%d", &clubes[i].vitorias);
        printf("Digite o n�mero de empates: ");
        scanf("%d", &clubes[i].empates);
        printf("Digite o n�mero de derrotas: ");
        scanf("%d", &clubes[i].derrotas);
        printf("Digite o n�mero de gols pr�: ");
        scanf("%d", &clubes[i].gols_pro);
        printf("Digite o n�mero de gols contra: ");
        scanf("%d", &clubes[i].gols_contra);

        soma_gols_pro += clubes[i].gols_pro;
    }

    float media_gols_pro = (float)soma_gols_pro / quantidade;
    printf("\nA m�dia de gols pr� dos clubes �: %.2f\n", media_gols_pro);

    printf("\nClubes com gols pr� acima da m�dia:\n");
    for (i = 0; i < quantidade; i++)
    {
        if (clubes[i].gols_pro > media_gols_pro)
        {
            printf("ID: %d, Nome: %s, Gols Pr�: %d\n", clubes[i].id, clubes[i].nome, clubes[i].gols_pro);
        }
    }

    return 0;
}

