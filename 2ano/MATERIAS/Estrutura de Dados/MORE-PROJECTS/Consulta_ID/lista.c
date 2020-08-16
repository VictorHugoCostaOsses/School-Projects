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
    Media * inicializa(void)
    {
        return NULL;
        //inicializando a lista como vazia, não aponta pra nimguém
    }

    Media * insere (Media * l, int i, float n1, float n2)
    {

        Media * novo = (Media*) malloc(sizeof(Media));
        novo -> ra = i;
        novo -> n1 = n1;
        novo -> n2 = n2;
        novo -> prox = l;//novo se torna o primeiro elemento da lista
        return novo;
    }

    Media * retira (Media *l, int v)
    {
    Media* ant = NULL; /* ponteiro para elemento anterior */
    Media* p = l; /* ponteiro para percorrer a lista*/
    /* procura elemento na lista, guardando anterior */
    while(p != NULL && p->ra != v) {
    ant = p;
    p = p->prox;
    }
    /* verifica se achou elemento */
    if (p == NULL)
    return l; /* não achou: retorna lista original */
    /* retira elemento */
    if (ant == NULL) {
    /* retira elemento do inicio */
    l = p->prox;
    }
    else {
    /* retira elemento do meio da lista */
    ant->prox = p->prox;
    }

    free(p);
    return l;
 }

    void libera (Media* l)
    {
    Media* p = l;
        while (p != NULL)
        {
        Media* t = p->prox; /* guarda referência para o próximo elemento
        */
        free(p); /* libera a memória apontada por p */
        p = t; /* faz p apontar para o próximo */
        }
    }

    void imprime (Media* l)
    {
        Media * p;
        for(p=l; p!=NULL; p = p->prox)
        {
         printf("%d\t%5.2f\t%5.2f\n",
        p->ra, p->n1,p->n2);
        }
    }

    int vazia (Media* l)
    {
        return (l == NULL);
    }

    Media * busca (Media * l, int v)
    {
        Media * p;
        for(p=l; p!=NULL; p=p->prox)
            if(p->ra == v)
            return p;

        return NULL; //Não achou o elemento
    }
