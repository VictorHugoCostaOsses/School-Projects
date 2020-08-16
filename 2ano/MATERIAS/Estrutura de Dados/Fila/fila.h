#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct fila Fila;
Fila* cria (void);
void insere (Fila* f, float v);
float retira (Fila* f);
int vazia (Fila* f);
void libera (Fila* f);

#endif // FILA_H_INCLUDED
