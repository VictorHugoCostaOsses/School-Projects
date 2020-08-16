#include <stdio.h>

int main(){

    int i, nElementos = 5, op;
    int x[5];

    printf("Vetor x: \n");

    for(i=0;i<nElementos;i++){
        scanf("%d", &x[i]);
    }

    printf("\n\nVetor x: \n");

    for(i=0;i<nElementos;i++)
        printf("% d\t", x[i]);

    printf("Rotacionar - 1");
    scanf("%d", &op);

    if(op == 1){
        for(i= i+1; i< nElementos; i++){
            x[i];
        }
        x[0] = x[5];
    }

    for(i=0;i<nElementos;i++)
        printf("% d\t", x[i]);



}
