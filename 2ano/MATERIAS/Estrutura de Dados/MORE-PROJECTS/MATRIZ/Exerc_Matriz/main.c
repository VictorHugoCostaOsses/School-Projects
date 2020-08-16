#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#include <stdlib.h>


int main()
{

   int **matriz;
   int linha;
   int coluna;
   int escolhaColuna;
   int escolhaLinha;
   int valor;
   int x=0;


  do
  {

  printf("\nInforme o tanto de linhas\n");
  scanf("%d", &linha);

  printf("\nInforme o tanto de Colunas\n");
  scanf("%d", &coluna);

  } while(linha<=0 || coluna<=0);


matriz = (int **) malloc(linha * sizeof(int *));

  for(int n = 0; n<linha; n++)
    {
        matriz[n] = (int *) malloc(coluna* sizeof(int));
    }

  printf("\nInforme a linha\n");
  scanf("%d", &escolhaLinha);

    printf("\nInforme a coluna\n");
  scanf("%d", &escolhaColuna);

   printf("\nInforme o valor\n");
   scanf("%d", &valor);

   for(int n =0; n<linha; n++)
   {
       for(int m =0; m<coluna; m++)
       {
           matriz[n][m]=x;
           x++;
       }
   }

muitLinha  (matriz, linha,coluna, escolhaLinha,valor);
muitColuna (matriz, linha,coluna, escolhaColuna,valor);
subNeg(matriz,linha,coluna);
OperacaoLinha(matriz,linha,coluna);
Return_Posicao(matriz,linha,coluna,9);
Remover_Caracter(matriz,escolhaLinha,escolhaColuna,linha,coluna);



return 0;
}
