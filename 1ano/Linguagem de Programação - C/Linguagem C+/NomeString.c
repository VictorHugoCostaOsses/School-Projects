#include <stdio.h>
#include <string.h>
#include <locale.h>
int main() /* fgts - É composto de três vars. Tam - Tamanho (assume o valor que se digita) e Stdin - Inserido Por Teclado*/
{
   setlocale(LC_ALL,"");
   int tam;
   char nome[30]; /* Máx 30 */
   printf("\nDigite seu nome:");
   fgets(nome,tam,stdin);
   printf("\nOlá %s!\n",nome);
   return 0;
}

