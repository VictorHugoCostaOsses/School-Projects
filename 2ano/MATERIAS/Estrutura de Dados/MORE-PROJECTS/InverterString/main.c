#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <locale.h>
int main()
{
   setlocale(LC_ALL,"");
   char texto[] = "ASTOUFO";

   printf("Escreva uma função que receba um string e inverta seu conteudo. ");

   printf("%s", inverteStr(texto));


    return 0;
}
