
#include <stdio.h>
int main()
/*Dado um tabuleiro de xadrez onde, para facilitar a indicação das pedras, vamos convencionar:
    1 – Peões 
    2 – Torres 
    3 – Reis 
    4 – Cavalos
    5 – Bispos
    6 – Rainhas
    7 – Ausência de Pedra

        7 2 7 3 7 2
        1 1 5 1 7 7
        2 7 3 4 4 3
        1 1 7 1 7 7
        1 3 7 4 5 1
        7 6 2 2 2 1

Faça um programa para ler uma matriz 5x5 de números inteiros. A seguir, o programa deverá
contar e mostrar a quantidade de cada tipo de pedra no tabuleiro:*/ 
{
    int mat[5][5], i, j, pecas[7], cont_pecas;

    printf("Informe os valores da matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 7; i++) {
        pecas[i] = 0;
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cont_pecas = mat[i][j];
            pecas[cont_pecas]++;
        }
    }

    printf("\nQuantidade de cada tipo de pedra:\n");
    printf("Peoes: %d\n", pecas[1]);
    printf("Torres: %d\n", pecas[2]);
    printf("Reis: %d\n", pecas[3]);
    printf("Cavalos: %d\n", pecas[4]);
    printf("Bispos: %d\n", pecas[5]);
    printf("Rainhas: %d\n", pecas[6]);
    printf("Ausencia de Pedra: %d\n", pecas[7]);
}
