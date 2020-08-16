#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"


int main()
{
    int * x1[]={1,3,5,6,7};
    int * x2[]={1,3,4,6,8};
    int n1=5,n2=5;
    int * qtd;
    uniao(&x1,&x2,n1,n2,&qtd);

    printf("\nNumero de elementos do vetor: %d \t",uniao(&x1,&x2,n1,n2,&qtd));

    printf("\n********************************************************************************************************************\n");

    interseccao(&x1,&x2,n1,n2,&qtd);
    printf("Numero de elementos da interseccao dos vetores: %d\n",  interseccao(&x1,&x2,n1,n2,&qtd));


   /* printf("Numerod e elementos do vetor:");
    scanf("%d", &n);
    vetor(n);*/


    return 0;
}
