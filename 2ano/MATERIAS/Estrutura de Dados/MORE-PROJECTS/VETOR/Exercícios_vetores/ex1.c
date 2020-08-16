#include <stdio.h>

int main(){

    int i, nElementos = 5;
    int x[5], y[5], s[5];

    printf("Vetor x: \n");
    for(i=0;i<nElementos;i++)
    {
        scanf("%d", &x[i]);
    }

    printf("Vetor y: \n");
    for(i=0;i<nElementos;i++)
    {
        scanf("%d", &y[i]);
    }

    printf("\n\nVetor x: \n");
    for(i=0;i<nElementos;i++)
    {
          printf("% d\t", x[i]);
    }

    printf("\n\nVetor y: \n");
    for(i=0;i<nElementos;i++)
    {
             printf("% d\t", y[i]);
    }


    for(i=0;i<nElementos;i++)
    {
        s[i] = x[i] * y[i];
    }

    printf("\n\nVetor resultante: \n");

    for(i=0;i<nElementos;i++)
    {
          printf("% d\t", s[i]);
    }



}
