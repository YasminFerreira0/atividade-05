#include <stdio.h>
void main ()
/*Faça um programa para ler uma matriz 5x5 de números inteiros. A seguir, o programa deverá
mostrar o número de linhas e o número de colunas nulas da matriz.
Exemplo:
A matriz 4x4 a seguir tem 2 linhas nulas e 1 coluna nula.
    1 0 2 3
    4 0 5 6
    0 0 0 0
    0 0 0 0*/
{
    int mat[5][5], i, j, cont_l, cont_c;

    cont_c = 0;
    cont_l = 0;
    
    printf("\nOnforme os valeres da matriz.\n");
    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if (mat[i][j] == 0){
                cont_l++;
            }
        }
    }

    for (j=0; j<5; j++){
        for (i=0; i<5; i++){
            if ( mat [i][j] == 0){
                cont_c++;
            }
        }
    }

    printf("\nA matriz tem %d linhas nulas e %d colunas nulas.", cont_l, cont_c);
}