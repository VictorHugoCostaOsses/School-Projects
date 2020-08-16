#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED

/* Victor Hugo Costa Osses 18152*/


void soma_matriz_int(int **a, int **b, int **c, int lin, int col);
void produto_matriz_int(int **a, int **b, int **c, int lin1, int col1,int lin2, int col2);
void transposta_matriz_int(int **a, int **t, int lin, int col);
int simetrica_matriz_int(int **matriz_A,int lin,int col);
int quadradomagico_matriz_int(int **m, int lin, int col);
#endif // MATRIZ_H_INCLUDED
