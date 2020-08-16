#include<stdio.h>
#include<stdlib.h>
#include"funcoes.h"

typedef struct Lista
{
    int info;
    L * proximo;
}L;

L * inicializaLista()
{
    return NULL;
}


L * insereL(L * l, int v)
{
    L * novo;
    novo = (L *)malloc(sizeof(L));

    if(novo != NULL)
    {
       novo->info = v;
       novo->proximo = l;
       l= novo;

    }
    return novo;

}



void imprimeLista(L * l)
{
    L * aux;
    for(aux = l; aux!=NULL; aux = aux->proximo)
    {
        printf("%d\n",aux->info);
    }


}

L * separaLista(L * l, int v)
{
        L * aux;
        L * p;

    for(aux = l; aux!=NULL; aux = aux->proximo)
    {
        if(aux->info == v)
        {
            p = aux->proximo;
            aux->proximo = NULL;
            return p;
        }

    }
return 0;
}

L * concatenaLista(L * lista, L * lista2)
{
    L * aux=lista;
    L * aux2 = lista2;
         do{

                    for(aux2; aux2!=NULL; aux2 = aux2->proximo)
                    {
                        if(aux->proximo == NULL )
                        {
                            aux->proximo = aux2->proximo;
                            aux2->proximo=NULL;
                        }
                    }
                     aux->proximo;
            }while(aux!=NULL);



return aux;
}




/*
 L * constroi (int n, int* v)
 {
    L * vetor;
    L * novo;
    int G=0;

    inicializaLista();
    vetor = (L *)malloc(sizeof(L));
    novo = (L *)malloc(sizeof(L));

for(G=0; G<n; G++)
{
    if(vetor != NULL)
    {
       vetor->info = v[G];
       vetor->proximo = novo;
       novo=vetor;

    }
 }
    return vetor;
 }
*/

