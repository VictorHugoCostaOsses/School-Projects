#include <stdio.h>
#include<stdlib.h>

/* Victor Hugo Costa Osses 18152*/


void soma_matriz_int(int **a, int **b, int **c, int lin, int col)
{

int m;
int n;
int x;

   printf("Matriz A\n");

      for(n=0; n<lin; n++)
        {
        for(m=0; m<col; m++)
         {
          printf(" %d | ", a[n][m]);
         }
        printf("\n");
        }

        printf("\nMatriz B:\n");

        for(n=0; n<lin; n++)
        {
            for(m=0; m<col; m++)
            {
            printf(" %d | ", b[n][m]);
            }
            printf("\n");
        }

    for(n=0; n<lin; n++)
    {
        for(m=0; m<col; m++)
        {
            x = a[n][m] + b[n][m];
            c[n][m]=x;
        }
        printf("\n");
    }

  printf("Soma de A e B = C:\n");

  for(n=0; n<lin; n++)
        {
            for(m=0; m<col; m++)
            {
       printf(" %d | ", c[n][m]);
            }
            printf("\n");
        }

}

void produto_matriz_int(int **a, int **b, int **c, int lin1, int col1,int lin2, int col2)
{

int m=0;
int n=0;
int x=0;
int resultado=0;

/*OBS: fiz a validação: Linhas de B == Colunas de A em minha main */

printf("\nProduto de A e B = C:\n");

for(m=0; m<lin1; m++)

      {
        for(n=0; n<col1; n++)
        {
            resultado=0;
            for(x=0; x<col2; x++)
            {
            resultado+=a[m][x]*b[x][n];
            }
        c[m][n]=resultado;
        }
      }

    for(m=0; m<lin1; m++)
      {
        for(n=0; n<col2; n++)
        {
        printf("%d |", c[m][n]);
        }
        printf("\n");
     }

}

void transposta_matriz_int(int **a, int **t, int lin, int col)
{
int n,m;
int **matrizTransposta;

 matrizTransposta = (int **) malloc(lin * sizeof(int *));

 for(n=0 ; n<lin; n++)
 {
    matrizTransposta[n] = (int *) malloc(col * sizeof(int));
 }

printf("\nTransposta\n");
for(n=0; n<lin; n++)
    {
        for(m=0; m<col; m++)
         {
         matrizTransposta[n][m] = a[m][n];
         printf("%d |" ,matrizTransposta[n][m]);
         }
        printf("\n");
    }

}

int simetrica_matriz_int(int **a,int lin,int col)
{

/*uma matriz é simétrica quando ela for igual a sua transposta*/

int **matrizTransposta;
int z=1;
int n;
int m;
int x;

 matrizTransposta = (int **) malloc(lin * sizeof(int *));

 for(n=0 ; n<lin; n++)
 {
    matrizTransposta[n] = (int *) malloc(col * sizeof(int));
 }


    for(n=0; n<lin; n++)
    {
        for(m=0; m<col; m++)
        {
             {
             matrizTransposta[m][m] = a[m][n];
             }

        }

    }


    for(m=0; m<lin; m++)

      {
        for(n=0; n<col; n++)
          {

            for(x=0; x<col; x++)
            {
                if(a[n][x] == matrizTransposta[x][n])
                {
                z=-1;
                }
                else
                z=0;

            }
         }
      }

if(z==-1)
return -1;
else
return 0;

}

int quadradomagico_matriz_int(int **m, int lin, int col)
{

int y;
int x;
int linha=0;
int diagonalP=0;
int diagonalS=0;
int coluna=0;
int z=1;


for(y=0; y<lin; y++)
      {
            for(x=0; x<col; x++)
                {
                 linha+=m[y][x];
                 coluna+=m[x][y];
                }
                if(linha == coluna)
                    z=-1;
                else
                return 0;

      }

       /*Condições para eu ter uma matriz com diagonal*/

      if(col==lin && col>=2)
      {
          x=0;
          for(y=0; y<col; y++ )
          {
              diagonalP+=m[x][y];
              x++;
          }
      }

    y=col;
      if(col==lin && col>=2)
      {

          for(x=0; x<col; x++ )
          {
              diagonalS+=m[x][y];
              y--;
          }
      }


      if(diagonalP == diagonalS )
      {
           if(diagonalP == linha)
            z=-1;
            return z;
      }



return z;




}






