#include <stdio.h>
#include<locale.h>
int main() /*Comentário , int=integer. Aonde eu quero que apareça um
 Numero inteiro no texto colocar %d  - d faz referencia ao tipo inteiro. Int retornar algum
 valor para alugum lugar. Tem void main tbm, mas nada vai ou retorna. setlocale(LC_ALL,"")
 junto com include<locale.h>, nos permite usar acento.  tipo de var = Float - real*/
{
   setlocale(LC_ALL,"");
   int soma;
   int mult =10;
   int imposto;
   imposto=5;
   soma = mult*imposto;
   printf("O resultado é: %d",soma);
   return 0;
}
