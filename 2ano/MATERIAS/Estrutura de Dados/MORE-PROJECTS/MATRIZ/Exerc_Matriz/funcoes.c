#include <stdio.h>
void muitLinha (int **matriz, int linha,int coluna, int ql, int qv)
{
printf("\nAntes\n");
for(int n =0; n<linha; n++)
   {
       for(int m =0; m<coluna; m++)
       {
          printf("%d | ", matriz[n][m]);
       }
    printf("\n");
   }

  for(int n=0; n<linha; n++)
  {
      matriz[ql][n]= matriz[ql][n]*qv;
  }


printf("\nLinha %d multiplicada por %d\n", ql,qv);
for(int n =0; n<linha; n++)
   {
       for(int m =0; m<coluna; m++)
       {
          printf("%d | ", matriz[n][m]);
       }
    printf("\n");
   }

}


void muitColuna (int **matriz, int linha,int coluna, int qc, int qv)
{

printf("\n");
printf("Coluna Antes\n");
for(int n =0; n<linha; n++)
   {
       for(int m =0; m<coluna; m++)
       {
          printf("%d | ", matriz[n][m]);
       }
    printf("\n");
   }

  for(int n=0; n<linha; n++)
  {
          matriz[n][qc]= matriz[n][qc]*qv;
  }

printf("\nColuna %d multiplicada por %d\n", qc,qv);
for(int n =0; n<linha; n++)
   {
       for(int m =0; m<coluna; m++)
       {
          printf("%d | ", matriz[n][m]);
       }
    printf("\n");
   }
}

void subNeg(int **matriz, int linha,int coluna)
{
printf("\nSem negativos\n");
for(int n =0; n<linha; n++)
   {
       for(int m =0; m<coluna; m++)
       {
          if(matriz[n][m]<0)
          {
           matriz[n][m]=matriz[n][m]*-1;
          }
          printf("%d | ", matriz[n][m]);

       }
    printf("\n");
   }

}


void OperacaoLinha(int **matriz, int linha, int coluna)
{
    printf("\n");
    int m=0;
    int soma=0;
    for(int n=0; n<2; n++)
    {
        for( m=0; m<coluna; m++)
        {
            soma += matriz[n][m];

        }

    }
    for(m=0; m<coluna; m++)
    {
          matriz[2][m]=soma;
    }
    printf("\n A soma da linha 1 com a 2 resulta na linha 3 com:\n");

    for(m=0; m<coluna;m++)
    {
       printf("%d | ",matriz[2][m]);
    }

}

void Return_Posicao(int **matriz, int linha, int coluna, int valor)
{
        int n,m;
        for(n=0; n<linha; n++)
        {
            for(m=0; m<coluna; m++)
            {
                if(valor == matriz[n][m])
                break;
            }

            if(valor == matriz[n][m])
            break;

        }
     printf("\n\n Caracter: %d \n Linha: %d \n Coluna: %d", valor,n,m);

}
void Remover_Caracter(int **matriz, int escolhaLinha,int escolhaColuna,int linha,int coluna)
{


    for(int n =0; n<linha; n++)
   {
       for(int m =0; m<coluna; m++)
       {
          if(linha==escolhaLinha && coluna==escolhaColuna)
          {
           for(escolhaColuna+=1; escolhaColuna<coluna; escolhaColuna++)
                   {
                      matriz[n][m]=matriz[n][escolhaColuna];
                   }

            }
        }

   }


}








