#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"

int main()
{
   setlocale(LC_ALL,"");
   int x,y;

   printf("\n Informe até onde vai a sequência");
   scanf("%d", &x);
   ex1(x);

   printf("\n**********************************\n");
   printf("\n Informe até onde vai a sequência da soma");
   scanf("%d",&x);
   ex2(x);

   printf("\n**********************************\n");
   printf("\n Informe até onde vai a sequência");
   scanf("%d",&x);
   ex3(x);

   printf("\n**********************************\n");
   printf("\n Informe até onde vai a sequência");
   scanf("%d" ,&x);
   printf("\n Informe até onde vai a sequência");
   scanf("%d" ,&y);
   ex4(x,y);
   printf("\n %d", ex4(x,y));


}
