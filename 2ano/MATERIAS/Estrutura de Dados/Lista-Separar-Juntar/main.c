#include <stdio.h>
#include <stdlib.h>
#include"funcoes.h"




int main()
{
    L * lista;
    L * resultado;
    L * novaLista;
    int vetor[5]={1,2,3,4,5};
    lista = inicializaLista();

    lista = insereL(lista,1);
    lista = insereL(lista,12);
    lista = insereL(lista,5);
    lista = insereL(lista,17);
    lista = insereL(lista,3);

    imprimeLista(lista);
    printf("**********************\n");

    novaLista = separaLista(lista, 5);
    imprimeLista(lista);

    printf("**********************\n");
    imprimeLista(novaLista);

    resultado = concatenaLista(lista,novaLista);
    imprimeLista(resultado);

    printf("**********************\n");
    /*resultado = constroi(5, vetor);
    imprimeLista(resultado);
*/
    return 0;
}
//Criar uma variavel do tipo lista que tem como objetivo apontar para o primeiro elemento da lista, que � nulo, ou seja igualamos ele a lista, porque ela � nula
// ent�o
