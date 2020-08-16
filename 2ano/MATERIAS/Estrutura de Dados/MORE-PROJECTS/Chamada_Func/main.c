#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"

int main()
{
   setlocale(LC_ALL,"");
   int x,y,n;
   int * vetor[5];
   int controle;



   printf("Informe até onde vai a sequência\n");
   for(controle=0; controle < 5; controle++)
   {
     scanf("%d",&vetor[controle]);
   }
    ex1(&vetor);




   printf("\n**********************************\n");
   printf(" Informe até onde vai a sequência da soma\n");
   scanf("%d",&x);
   ex2(x);
   printf("\n %d", ex2(x));


   printf("\n**********************************\n");
   printf(" Informe até onde vai a sequência de Fibonacci\n");
   scanf("%d",&x);
   ex3(x);


   printf("\n**********************************\n");
   printf("Informe um valor\n");
   scanf("%d" ,&x);
   printf("Informe um valor para comparação\n");
   scanf("%d" ,&y);
   ex4(x,y);
   printf("%d", ex4(x,y));

   printf("\n**********************************\n");
   printf("Informe o valor em centimetros\n");
   scanf("%d" ,&n);
   ex5(n);

   printf("\n**********************************\n");
   printf("Informe o limite inferior\n");
   scanf("%d" ,&x);
   printf("Informe o limite superior\n");
   scanf("%d" ,&y);
   ex6(x,y);




}
