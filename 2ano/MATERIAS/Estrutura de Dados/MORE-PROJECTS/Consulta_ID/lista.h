#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct media Media;
Media * inicializa(void);
Media * insere (Media * l, int i, float n1, float n2);
Media * retira (Media *l, int v);
void libera (Media* l);
void imprime (Media* l);
int vazia (Media* l);
Media * busca (Media * l, int v);
#endif // LISTA_H_INCLUDED;
