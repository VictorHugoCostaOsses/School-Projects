#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#include<locale.h>
/* Victor Hugo Costa e Gustavo Tawara */
int main()
{
  setlocale(LC_ALL,"");
   printf("\nExercicio1:");
   ex1(10);
   printf("\n================\n");

   printf("\nExercicio2:");
   ex2(10);
   printf("\n================\n");

   printf("\nExercicio4:");
   ex4(5,3);
   printf("\n================\n");

   printf("\nExercicio5:");
   ex5(5);
   printf("\n================\n");

   printf("\nExercicio6:");
   ex6(2,4);
   printf("\n================\n");
   return 0;

}
