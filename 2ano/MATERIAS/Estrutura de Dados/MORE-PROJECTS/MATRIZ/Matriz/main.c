#include <stdio.h>
#include <stdlib.h>

void impMatInt(int **g, int linha, int coluna)
{

    for(int n=0; n<linha; n++)
   {
       for(int m=0; m<coluna; m++)
       {
           printf(" %d | ", g[n][m]);
       }
      printf("\n");
   }
}


int main()
{
    int fila,posicao;
    int linha,coluna;
   /* int lab[4][5] = {   Array
                        {0,0,0,0,0},
                        {0,0,0,0,0},
                        {0,0,0,0,0},
                        {0,0,0,0,0},
                    };
    */
  do{
  printf("Informe o tanto de linhas\n");
  scanf("%d", &linha);

  printf("Informe o tanto de colunas\n");
  scanf("%d", &coluna);

  }while(linha<=0 || coluna <=0);




    int **lab; /* aponta para regioes que voa ter outros ponteiros*/

    lab = (int **) malloc(linha * sizeof(int *));/* As linhas vão ter o tamanho de um INT * */

    for(int n = 0; n<linha; n++)
    {
        lab[n] = (int *) malloc(coluna* sizeof(int)); /* As coluna vão ter o tamanho de um INT  */
    }


     for(int n=0; n<linha; n++)
     {
         for(int s = 0; s<coluna; s++)
            lab[n][s]=0;
     }

    do
    {
        system("cls"); /* clear screen*/

        printf("\nFila  (0 a 3) (-1 para sair):");
        scanf("%d", &fila);

        if(fila<0)
        {
            break;
        }

         printf("\nPosicao (0 a 4) :");
         scanf("%d", &posicao);

        if(lab[fila][posicao]==0)
        {
             lab[fila][posicao]=1;
             printf("Posicao reservada com sucesso!\n\n");
        }

        else
        printf("\nPosicao Indiponivel\n");
        system("pause");



    }while(1); /* Laço infini - Faça enquanto for verdadeiro (diferente de 0 é true): NÃO INTERESSA*/


impMatInt(lab,linha,coluna);

    return 0;
}
