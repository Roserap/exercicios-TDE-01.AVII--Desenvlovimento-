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

    struct Clube melhor_clube = clubes[0];
    struct Clube pior_clube = clubes[0];

   for (i = 1; i < quantidade; i++) {
        if (clubes[i].vitorias > melhor_clube.vitorias) {
            melhor_clube = clubes[i];
        }
        if (clubes[i].vitorias < pior_clube.vitorias) {
            pior_clube = clubes[i];
        }
    }

    printf("\nClube Campe�o:\n");
    printf("ID: %d\n", melhor_clube.id);
    printf("Nome: %s\n", melhor_clube.nome);
    printf("Vit�rias: %d\n", melhor_clube.vitorias);
    printf("Empates: %d\n", melhor_clube.empates);
    printf("Derrotas: %d\n", melhor_clube.derrotas);
    printf("Gols Pr�: %d\n", melhor_clube.gols_pro);
    printf("Gols Contra: %d\n", melhor_clube.gols_contra);

    printf("\n�ltimo Colocado:\n");
    printf("ID: %d\n", pior_clube.id);
    printf("Nome: %s\n", pior_clube.nome);
    printf("Vit�rias: %d\n", pior_clube.vitorias);
    printf("Empates: %d\n", pior_clube.empates);
    printf("Derrotas: %d\n", pior_clube.derrotas);
    printf("Gols Pr�: %d\n", pior_clube.gols_pro);
    printf("Gols Contra: %d\n", pior_clube.gols_contra);


    return 0;

}
