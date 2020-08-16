#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, nElementos = 5;
    int ma, me;
    int x[5];

    printf("Vetor x: \n");

    for(i=0;i<nElementos;i++){
        scanf("%d", &x[i]);
    }

    printf("\n\nVetor x: \n");

    for(i=0;i<nElementos;i++){
        printf("% d\t", x[i]);
    }

    printf("\n\nDigite o intervalo:\n");
    scanf("%d", &me);

    printf("\nDigite o intervalo:\n");
    scanf("%d", &ma);

    for(i=me; i<=ma; i++){
        printf("% d\t", x[i]);
    }

}
