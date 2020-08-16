#include <stdio.h>
#include <stdlib.h>

int troca (int * a,  int * b); /* Cabeçario
*/

int main()
{
    int x=11;
    int y=20;
    printf("Passagem de parametros!\n");
    printf("X = %d \t\t Y = %d\n\n", x,y);
    troca (&x,&y); /* & - Vai receber a posição de memória assim podendo trocar os valores */
    printf("X = %d \t\t Y = %d\n\n", x,y);

    return 0;
}

int troca(int * b, int * a){/* Guardar um endereço de memória que tem um valor inteiro*/ /* Variável Ponteiro - guarda o end de memória*/
int z= * a; /* *a - Vá no endereço de memória de x e pegue o valor pra colocar aqui */
*a=*b;
*b=z;
return 0;


}
