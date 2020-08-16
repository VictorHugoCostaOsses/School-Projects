#include <stdio.h>
#include <stdlib.h>
#include"lista.h"

typedef struct media Media;
typedef struct media{
int ra;
float n1;
float n2;
Media * prox;
};

int main()
{
    Media * lista;
    Media * aux;


    lista = inicializa();
    lista = insere(lista,1001,7.5,7);
    lista = insere(lista,1002,8.5,9);
    lista = insere(lista,1003,4.5,10);
    lista = insere(lista,1004,8.5,2);



    imprime(lista);
    printf("\n----------------------\n");
    aux = busca(lista,1004);

    if(aux!=NULL)
    {
         printf("%d\t%5.2f\t%5.2f\n",
         aux->ra, aux->n1,aux->n2);
    }

    //Liberar a memória para qual a lista aponta

    libera(lista);
    retira(lista,1004);

    return 0;
}
