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
    }

    printf("\nSaldo de gols dos clubes cadastrados:\n");
    for (i = 0; i < quantidade; i++)
    {
        int saldo_gols = clubes[i].gols_pro - clubes[i].gols_contra;
        printf("Clube: %s (ID: %d) - Saldo de Gols: %d\n", clubes[i].nome, clubes[i].id, saldo_gols);
    }

    return 0;
}
