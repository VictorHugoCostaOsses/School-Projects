#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

// Victor Hugo e Gustavo Tawara
typedef struct Lista L;

L * inicializaLista();
L * insereL(L * l, int v);
void imprimeLista(L * l);
L * separaLista(L * l,int v);
L * concatenaLista(L* lista, L * lista2 );
//L * constroi(int n, int* v);





#endif // FUNCOES_H_INCLUDED
