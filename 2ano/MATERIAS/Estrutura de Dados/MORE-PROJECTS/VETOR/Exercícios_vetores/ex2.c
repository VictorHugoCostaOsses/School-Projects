#include <stdio.h>

int main(){

    int i,j, nElementos = 5;
    int x[5], y[5];

    printf("Vetor x: \n");

    for(i=0;i<nElementos;i++){
        scanf("%d", &x[i]);
    }

    printf("Vetor y: \n");

    for(i=0;i<nElementos;i++){
        scanf("%d", &y[i]);
    }

    printf("\n\nVetor x: \n");

    for(i=0;i<nElementos;i++)
        printf("% d\t", x[i]);

    printf("\n\nVetor y: \n");

    for(i=0;i<nElementos;i++)
        printf("% d\t", y[i]);

    for(i=0;i<nElementos;i++)
    {

        for(j=0;j<nElementos;j++){

            if(x[i] == y[j])
            {
                printf("igual");
                break;
            }

        }

    }

}
