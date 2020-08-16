#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

/*Victor Hugo 18152 e Gustavo Tawara 18134*/

int main()
{
    Pilha * p1;
    int z;
    int max,min;
    int v=0;

    p1=cria();


    do
    {
        z = getch();

            if(z==72 && v<10)
            {
                v++;
                push(p1,v);
            }

               if(z==80 && v>0)
            {
                v--;
                pop(p1);
            }
        system("cls");
        imprime(p1);

    }
    while(z!=27);




    return 0;
}
