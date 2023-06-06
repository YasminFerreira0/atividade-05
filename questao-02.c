#include <stdio.h>
void main()
/*Dizemos que uma matriz quadrada inteira é um quadrado mágico, se a soma dos elementos de
cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal
e secundária são todas iguais.
Exemplo: A matriz a seguir é um quadrado mágico.
    8 0 7
    4 5 6
    3 10 2

Faça um programa para ler uma matriz 5x5 de números inteiros. A seguir, o programa deverá
verificar e responder se a matriz é um quadrado mágico.*/
{
    int mat[3][3], i, j, soma_l, soma_c, soma_dp, soma_ds;

    soma_l = 0;
    soma_c = 0;
    soma_dp = 0;
    soma_ds = 0;

    printf("\nInfomre os valores da matriz.\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0; i<5; i++){
        soma_l = 0;
        for(j=0; j<5; j++){
            soma_l = soma_l + mat[i][j];
        }
    }
    if (i ==0){
        soma_c = soma_l;
    }else{
        if ( soma_l != soma_c){
            printf("\nA matriz nao e um quadrado magico.\n");
        }
    }

    for (j=0; j<5; j++){
        soma_l = 0;
        for (i=0; i<5; i++){
            soma_l = soma_l + mat[i][j];
        }
    }
    if ( soma_l != soma_c){
        printf("\nA matriz nao e um quadrado magico.\n");
    }

    for (i=0, j=4; i<5; i++, j--){
        soma_dp = soma_dp + mat[i][i];
        soma_ds = soma_ds + mat[j][i];
    }

    if ( soma_l == soma_c && soma_c == soma_dp && soma_dp == soma_ds){
        printf("\nA matriz e um quadrado magico.");
    }else{
        printf("\nA matriz nao e um quadrado magico.");
    }

}