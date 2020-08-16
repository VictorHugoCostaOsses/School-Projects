#include <stdio.h>
#include <stdlib.h>
#define N 6; /* constante cujo valor é dado*/







void imprimeMedias(int nEl, float * v)/* Passagem de Parametro pro valor: Passa uma cópia do valor / Por referencia: passa o endereco de memoria*/
/*nE1 - Numero de elementos */
{
int x;
for(x=0; x<5; x++)
 {
     printf(" %d) %5.2f \n",x+1, *(v+x));/* x+1 exibir apartir do 1 - Ponteiro : *medias+x Avance tantas posições e pegue o elemento no endereço */
 }

 }
int main()
{

 float medias[5]={7.0,6.5,3.5,5.0,9.5}; /*Vai alocar memória pra 5 elementos sequenciais - Variável do tipo vetor. 1 elemento sempre sera posição 0. Ultimo sera n elementos menos 1*/
 /* Consumo de memória é IGUAL, mas é mais fácil criar isso do que 5 variaveis. Procura , nesse caso, 40 bytes em sequencia pra armazenar*/

/* media[0] = 7.0; /* nome do vetor, posição e valor
 media[1] = 6.5;
 media[2] = 3.5;
 media[3] = 5.0;
 media[4] = 9.5;*/

 /*float media[5]={7.0,6.5,3.5,5.0,9.5}; Declarando e já atribuindo valor. Posso colocar só [] e os valores,pois  o programa tem QI +80000 */
 /* Ponteiro - Variavel que guarda um endereço de memória que tem um valor. Um vetor é um ponteiro - Guarda onde começa a região de memória(endereço vai ser armazenao em memorias)*/



 return 0;

}


