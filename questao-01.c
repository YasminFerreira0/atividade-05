#include <stdio.h>
void main ()
/*Dizemos que uma matriz inteira An×n é uma matriz de permutação se em cada linha e em cada
coluna houver n-1 elementos nulos e um único elemento igual a 1.
Exemplo:
A matriz a seguir é de permutação.
    0 1 0 0
    0 0 1 0
    1 0 0 0
    0 0 0 1

Observe que:

    2 -1 0
    -1 2 0
    0 0 1

não é de permutação.

Faça um programa para ler uma matriz 5x5 de números inteiros. A seguir, o programa deverá
verificar e responder se a matriz é de permutação.*/
{
    int mat[5][5], i, j, cont_1, cont_0;

    printf("\nInforme os valores da matriz.\n");
    for (i=0;i<5;i++){
        for (j=0;j<5;j++) {
            scanf("%d ", &mat[i][j]);
        }
    }


    for (i=0;i<5;i++){
        cont_0 = 0;
        cont_1 = 0;

        for (j=0;j<5;j++) {
            if (mat[i][j] == 0){
                cont_0++;
            }else{
                if(mat[i][j] == 1){
                    cont_1++;
                }
            }
        }
    }

    for (j=0;j<5;j++){
        cont_0 = 0;
        cont_1 = 0;

        for (i=0;i<5;i++) {
            if (mat[i][j] == 0){
                cont_0++;
            }else{
                if(mat[i][j] == 1){
                    cont_1++;
                }
            }
        }
    }

    if (cont_0 == 4 && cont_1 == 1){
        printf("\nA matris e de permutacao.");
    }else{
        printf("\nA matriz nao e de permutacao.");
    }
}