#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"



int main()
{
    Pilha * p1;

    p1=cria();
    push(p1,10);
    push(p1,22);
    push(p1,16);
    push(p1,1);
    push(p1,92);

    printf("=================== PILHA ORIGININAL ================\n");
    imprime(p1);
    printf("=================== POP() ================\n");
    pop(p1);
    imprime(p1);
    printf("=================== POP() ================\n");
    pop(p1);
    imprime(p1);

    return 0;
}
