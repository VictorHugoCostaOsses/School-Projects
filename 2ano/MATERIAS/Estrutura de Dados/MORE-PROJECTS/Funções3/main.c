#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int  x1[]={1,2,3,4,5};
    int  x2[]={8,7,6,21};
    int n1=5;
    int n2=4;
    int qtd=0;
    int * Resultado;
    int nel=4;
    Resultado = uniao(x1,x2,n1,n2,&qtd);

    printf("Número de elementos do vetor: %d \n\n", qtd);


    for(int n =0; n<qtd; n++)
    {
        printf("%d \t", Resultado[n]);
    }


    Resultado = interseccao(x1,x2,n1,n2,&qtd);
    printf("\n\nNúmero de elementos do vetor: %d \n\n", qtd);

    printf("Intersecção : \t ");
    for(int n =0; n<qtd; n++)
    {
        printf("%d \t", Resultado[n]);
    }

   Resultado = carregaDados(nel);
   printf("\nVetor Alocado dicanamicamente:\n");


    for(int n =0; n<nel; n++)
    {
        printf("%d \t", Resultado[n]);
    }


    return 0;
}
