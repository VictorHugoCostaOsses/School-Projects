#include <stdio.h>
#include <string.h>
#include <locale.h>
int main() /* %s tipo string  PS: PROBLEMA NO NOME*/
{
   setlocale(LC_ALL,"");
   char nome[30];
   printf("\nDigite seu nome:");
   scanf("%s",nome);
   printf("\nOlá %s!\n",nome);
   return 0;
}
