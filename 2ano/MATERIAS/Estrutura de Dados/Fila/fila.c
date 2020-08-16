#define N 100
#include "fila.h"
#include<math.h>
struct fila
{
int ini, fim;
float vet[N];
};

Fila* cria (void)
{
Fila* f = (Fila*) malloc(sizeof(Fila));
f->ini = f->fim = 0; /* inicializa fila vazia */
return f;
}

void insere (Fila* f, float v)
{
    if (incr(f->fim) == f->ini) { /* fila cheia: capacidade esgotada*/
    printf("Capacidade da fila estourou.\n");
    exit(1); /* aborta programa */
    }
    /* insere elemento na pr�xima posi��o livre */
    f->vet[f->fim] = v;
    f->fim = incr(f->fim);
}
float retira (Fila* f)
{

float v;
    if (vazia(f)) {
    printf("Fila vazia.\n");
    exit(1); /* aborta programa */
    }
    /* retira elemento do in�cio */
    v = f->vet[f->ini];
    f->ini = incr(f->ini);
    return v;
}

int vazia (Fila* f)
{
return (f->ini == f->fim);
}

void libera (Fila* f)
{
free(f);
}
