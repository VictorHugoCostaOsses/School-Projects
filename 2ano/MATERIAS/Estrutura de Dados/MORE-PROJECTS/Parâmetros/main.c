#include <stdio.h>
#include <stdlib.h>

int troca (int * a,  int * b); /* Cabe�ario
*/

int main()
{
    int x=11;
    int y=20;
    printf("Passagem de parametros!\n");
    printf("X = %d \t\t Y = %d\n\n", x,y);
    troca (&x,&y); /* & - Vai receber a posi��o de mem�ria assim podendo trocar os valores */
    printf("X = %d \t\t Y = %d\n\n", x,y);

    return 0;
}

int troca(int * b, int * a){/* Guardar um endere�o de mem�ria que tem um valor inteiro*/ /* Vari�vel Ponteiro - guarda o end de mem�ria*/
int z= * a; /* *a - V� no endere�o de mem�ria de x e pegue o valor pra colocar aqui */
*a=*b;
*b=z;
return 0;


}
