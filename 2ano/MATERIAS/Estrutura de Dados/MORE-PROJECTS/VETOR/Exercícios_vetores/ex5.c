#include <stdio.h>
#include <stdlib.h>

int main(){

int i, nElementos = 5;
    int x[5], menor = 0, maior = 0;

    printf("Vetor x: \n");

    for(i=0;i<nElementos;i++){
        scanf("%d", &x[i]);

        if(i == 0)
        {
            menor = x[0];
            maior = x[0];

        }else{
            if(x[i] < menor){
                menor = x[i];
            }

            if(x[i] > maior){
                maior = x[i];
            }
        }
    }

    printf("\n\nVetor x: \n");

    for(i=0;i<nElementos;i++)
        printf("% d\t", x[i]);

    printf("\n\n%d\n\n%d", menor, maior);



}
