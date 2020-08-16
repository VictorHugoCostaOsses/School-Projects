#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
#include <locale.h>
#include <stdlib.h>



int main()
{
    setlocale(LC_ALL,"");
    printf("*******************************\n");
    printf("Exercícios para nota: \n");

    int **matriz_A;
    int **matriz_B;
    int **matriz_C;
    int **matriz_t;
    int **matriz_Z;
    int lin1=0;
    int col1=0;
    int lin2=0;
    int col2=0;
    int n=0;
    int m=0;
    int x=0;





    printf("\nInforme o tanto de linhas da matriz A:\n");
    scanf("%d", &lin1);

    printf("Informe o tanto de colunas da matriz A:\n");
    scanf("%d", &col1);

    lin2=col1;
    printf("\n");
    printf("Linha B = col A\n");

    printf("Informe o tanto de colunas da matriz B\n");
    scanf("%d",&col2);


/*system("cls");*/


printf("\n");
    matriz_A = (int **) malloc(lin1 * sizeof(int *));
    matriz_B = (int **) malloc(col1 * sizeof(int *));
    matriz_C = (int **) malloc(lin1 * sizeof(int *));
    matriz_t = (int **) malloc(lin1 * sizeof(int *));
    matriz_Z = (int **) malloc(lin1 * sizeof(int *));



    for(int n = 0; n<lin1; n++)
    {
        matriz_A[n] = (int *) malloc(col1 * sizeof(int));
        matriz_B[n] = (int *) malloc(col2 * sizeof(int));
        matriz_C[n] = (int *) malloc(col1 * sizeof(int));
        matriz_t[n] = (int *) malloc(col1 * sizeof(int));
        matriz_Z[n] = (int *) malloc(col1 * sizeof(int));
    }


    for(n=0; n<lin1; n++)
    {
        for(m=0; m<col1; m++)
        {
            matriz_A[n][m]=x;
            x++;

        }

    }

      for(n=0; n<lin2; n++)
    {
        for(m=0; m<col2; m++)
        {
           matriz_B[n][m]=x;
           x++;

        }
    }

     for(n=0; n<lin2; n++)
     {
        for(m=0; m<col1; m++)
        {

           matriz_t[n][m]=x;
           x++;

        }

    }

    for(n=0; n<lin1; n++)
     {
        for(m=0; m<col1; m++)
        {
           matriz_Z[n][m]=1;
        }

    }







soma_matriz_int(matriz_A, matriz_B ,matriz_C ,lin1, col1);
produto_matriz_int(matriz_A, matriz_B, matriz_C, lin1,col1,lin2,col2);
transposta_matriz_int(matriz_A, matriz_t, lin1, col1);

simetrica_matriz_int(matriz_A, lin1,col1);
quadradomagico_matriz_int(matriz_Z, lin1, col1);
printf("\n");
printf("Matriz simétrica ? : %d\n",simetrica_matriz_int(matriz_A, lin1,col1));
printf("Quadrado Mágico  ? : %d",quadradomagico_matriz_int(matriz_Z, lin1, col1));
return 0;
}
