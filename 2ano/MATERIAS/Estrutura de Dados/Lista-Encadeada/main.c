//Victor Hugo Costa Osses 18152
//Gustavo Tawara 18134
#include <stdio.h>
#include "funcoes.h"

typedef struct no No;

typedef struct no
{
    int info;
    No * prox;
};

No * inicializaLista()
{
    return NULL;
}

No * insereNo(No * l, int v)
{
    No * novo;
    novo = (No *) malloc(sizeof(No));
        novo -> info = v;
        novo -> prox = l;
    return novo;
}

void imprimeLista(No * l)
{
    No * p;
    for(p = l; p !=NULL; p = p-> prox)
    {
        printf("O valor e: %d\n", p -> info);
    }
}
No * separaLista(No * l, int v)
{
    No * aux;
    No * p;

    for(aux = l; aux!= NULL; aux = aux -> prox)
    {
        if(aux -> info == v)
        {
            p = aux -> prox;
            aux -> prox = NULL;
            return p;
        }
    }
}
No * concatenaLista(No * lista1, No * lista2)
{
    No * aux, * aux2;
    No * p;
    int v = 0;

    for(aux = lista1; aux = NULL; aux = aux -> prox)
    {
        for(aux2 = lista2; aux2 != NULL; aux2 = aux2 -> prox)
        {
          v++;

        if(aux -> prox == NULL && v == 1)
        {
            p = aux2 -> prox;
            aux -> prox = p;

        }
        }
    }
}

No * constroi (int n, int* v)
{
    No * listav;

    listav = inicializaLista();
    if(*v == NULL)
        return listav;
    for(int i = 0; i < n; i++)
    {
       listav = insereNo(listav,v[i]);
    }
    return listav;

}

No * retira_prefixo (No * l, int n)
{
    No * aux;

    for(aux = l; aux != NULL; aux = aux -> prox)
    {
        if(aux -> prox == n)
        {
            l = inicializaLista();
        }
    }
    return l;
}
