#include<stdio.h>
#include<locale.h>
int main()
/* %c - pra Char. Mod � % . Div n�o tem - Use / */
{
setlocale(LC_ALL,"");
int soma;
int subtrai;
soma=1;
subtrai=2;
soma++;
subtrai--;
printf("O resultado �: %d e %d",soma,subtrai);
return 0;
}

