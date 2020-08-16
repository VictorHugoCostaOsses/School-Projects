#include <stdio.h>
#include <stdlib.h>

int gControle;

void ex1(int * vetor)
{
  int guardar[5];
  int n=0;
    for(gControle=0; gControle< 5; gControle++)
    {
                guardar[gControle] =  vetor[n];
                n++;
                printf("%d \t", guardar[gControle]);
    }

}

int ex2(int * k)
{
    int soma=0;
    for(gControle=0; gControle<=k; gControle++)
    {
        soma = soma + gControle;
    }
   return soma;
}

void ex3(int x)
{
 int aux=0,a=1,b=0;
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
 if(x>y)
 {
     return -1;

 }
 if (y>x)
 {
    return 1;
 }

}

void ex5(int n)
{
    float calculo = 0;
    for(gControle=1; gControle<=n; gControle++)
      {
            calculo = 2.54*gControle;
            printf("%5.2f cm = %d polegadas\n",calculo,gControle);
      }

}

int ex6(int x,int y)
{
    int soma =0;

 for(x; x<=y; x++)
 {
     if(x%2==0)
     {
         soma += x;
     }

 }
 printf("\n A soma dos números pares é = %d", soma);
}


