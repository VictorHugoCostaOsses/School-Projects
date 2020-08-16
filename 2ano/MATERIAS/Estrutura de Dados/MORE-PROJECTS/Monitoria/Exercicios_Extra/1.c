#include <stdlib.h>
#include <stdio.h>

void ex4(int x)
{
int controle=0;
int aux,a=1,b=1;
printf("\n 1\n 1\n");
 for(controle; controle<=x; controle++)
        {

         aux = a + b;
         b = a;
         a = aux;


         printf("\n %d\n",  aux);
        }
}



int main(){

    int x=0;

    printf("\n Informe");
    scanf("%d",&x);
    ex4(x);
   }




