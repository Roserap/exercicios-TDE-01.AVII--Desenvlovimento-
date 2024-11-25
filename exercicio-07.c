#include <stdio.h>
#include <stdlib.h>

#define MAX_CLUBES 10

struct Clube {
    int id;
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int gols_pro;
    int gols_contra;
};

int main() {
    struct Clube clubes[MAX_CLUBES];
    int quantidade, i;

    printf("Quantos clubes voc� deseja cadastrar (m�ximo %d)? ", MAX_CLUBES);
    scanf("%d", &quantidade);

    if (quantidade > MAX_CLUBES) {
        printf("Voc� pode cadastrar no m�ximo %d clubes.\n", MAX_CLUBES);
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
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

    int id_busca;
    printf("\nDigite o ID do clube que deseja buscar: ");
    scanf("%d", &id_busca);

    int encontrado = 0;

    for (i = 0; i < quantidade; i++) {
        if (clubes[i].id == id_busca) {
            encontrado = 1;

            printf("\nClube encontrado:\n");
            printf("ID: %d\n", clubes[i].id);
            printf("Nome: %s\n", clubes[i].nome);
            printf("Vit�rias: %d\n", clubes[i].vitorias);
            printf("Empates: %d\n", clubes[i].empates);
            printf("Derrotas: %d\n", clubes[i].derrotas);
            printf("Gols Pr�: %d\n", clubes[i].gols_pro);
            printf("Gols Contra: %d\n", clubes[i].gols_contra);
            break;
        }
    }

    if (!encontrado) {
        printf("Clube com ID %d n�o encontrado.\n", id_busca);
    }

    return 0;
}
}
