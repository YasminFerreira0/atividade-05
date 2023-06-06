#include <stdio.h>

int main() {
    int mat[5][5], i, j, soma_l, soma_c, soma_dp, soma_ds;

    soma_l = 0;
    soma_c = 0;
    soma_dp = 0;
    soma_ds = 0;

    printf("Informe os valores da matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        soma_l = 0; // reinicializa a soma da linha antes de calcular a próxima linha
        for (j = 0; j < 5; j++) {
            soma_l = soma_l + mat[i][j];
        }
        if (i == 0) {
            soma_c = soma_l; // atribui a soma da primeira linha à soma das colunas
        } else if (soma_l != soma_c) {
            printf("\nA matriz nao e um quadrado magico.\n");
            return 0; // sai do programa se a soma de uma linha for diferente da soma das colunas
        }
    }

    for (j = 0; j < 5; j++) {
        soma_l = 0; // reinicializa a soma da coluna antes de calcular a próxima coluna
        for (i = 0; i < 5; i++) {
            soma_l = soma_l + mat[i][j];
        }
        if (soma_l != soma_c) {
            printf("\nA matriz nao e um quadrado magico.\n");
            return 0; // sai do programa se a soma de uma coluna for diferente da soma das linhas
        }
    }

    for (i = 0, j = 4; i < 5; i++, j--) {
        soma_dp = soma_dp + mat[i][i];
        soma_ds = soma_ds + mat[j][i];
    }

    if (soma_c == soma_dp && soma_dp == soma_ds) {
        printf("\nA matriz e um quadrado magico.\n");
    } else {
        printf("\nA matriz nao e um quadrado magico.\n");
    }

    return 0;
}
