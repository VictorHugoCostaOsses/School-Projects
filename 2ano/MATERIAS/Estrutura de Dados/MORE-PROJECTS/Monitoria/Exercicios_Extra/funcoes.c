#include <stdio.h>
#include <stdlib.h>

int gControle;

void ex1(int x)
{

    for(gControle=0; gControle<=x; gControle++)
    {
      printf("\n %d \t", gControle);
    }
}

void ex2(int x)
{


    int soma=0;
    for(gControle=0; gControle<=x; gControle++)
    {
        soma = soma + gControle;
    }
    printf("\n A soma dos termos é %d \n", soma);
}

void ex3(int x)
{
 int aux=0,a=1,b=1;
 printf("\n 1\n");
 for(gControle=0; gControle<=x; gControle++)
 {

aux = b + a;
a=aux;
b=gControle;

printf("\n %d\t ",aux);

 }
}

int ex4(int x, int y)
{
 if(x > y)
 {
     return -1;

 }
 if (y > x)
 {
    return 1;

 }

}

