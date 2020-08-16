#include <stdlib.h>
#include <stdio.h>
/*Victor Hugo Costa Osses 18152  */
/*Gustavo Tawara 18134 */
/* Desculpe-nos pela domora rsrs, mas acredito que entendemos. Obrigado por esperar! */

int * uniao(int * x1, int *x2, int n1, int n2, int * qtd)
{
int * x3;
int * maior;
int * menor;
int qt = 0;
int tMaior=0;
int tMenor=0;
int n,m;
int achou=0;

        if(n1>n2)
        {
           maior = x1;
           menor = x2;
           tMaior = n1;
           tMenor = n2;

        }

        if(n2>n1)
        {
           maior = x2;
           menor = x1;
           tMaior = n2;
           tMenor = n1;
        }

    qt = tMaior;

    x3 = (int *) malloc(tMaior * sizeof(int));
    for(n = 0; n <tMaior; n++)
    {
        x3[n]=maior[n];
    }

     for(n = 0; n <tMenor; n++)
     {
        achou = 0;
        for(m=0; m<tMaior; m++)
        {
            if(menor[n]==maior[m])
            {
                achou=1;
            }
            if(achou) break;
        }
        if(achou!=1)
        {
            qt++;
            x3 = (int *) realloc (x3, qt*sizeof(int));
            x3[qt-1] = menor[n];
        }
     }

     *qtd = qt;

     return  x3;

}

int * interseccao(int *x1, int *x2, int n1, int n2, int *qtd)

{

int * x3;
int * maior;
int * menor;
int qt = 0;
int tMaior=0;
int tMenor=0;
int n,m;


        if(n1>n2)
        {
           maior = x1;
           menor = x2;
           tMaior = n1;
           tMenor = n2;

        }

        if(n2>n1)
        {
           maior = x2;
           menor = x1;
           tMaior = n2;
           tMenor = n1;
        }



    x3 = (int *) malloc(tMaior * sizeof(int));

     for(n = 0; n <tMenor; n++)
     {
        for(m=0; m<tMaior; m++)
        {
            if(menor[n]==maior[m])
            {
                qt++;
                x3 = (int *) realloc(x3, qt*sizeof(int));
                x3[qt-1] = maior[m];
            }
         }
      }

    *qtd = qt;
     return  x3;

}


int * carregaDados(int nel)
{

    int * x3;
    int n;

    x3 = (int *) malloc(nel*sizeof(int));

    printf("\n\nInforme os valores do vetor:\n");

    for(n=0; n<nel; n++)
    {
        scanf("%d", &x3[n]);
    }

    return x3;

}




