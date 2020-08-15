#include<stdio.h>
#include<locale.h> /* switch - Verifique tal variavel  | defaul - É tipo um else (qualquer outro entra nele) break - SE ENTRAR em um não precisa
 verificar os demais Case - só para Char ou Integer*/

int main()


{
    setlocale(LC_ALL,"");
  int a,b;
  printf("\nDigite um numero");
  scanf("%d",&a);
  b = a%2;
  switch(b)
  {
     case 0: printf("\nNumero par!\n");
     break;
     case 1: printf("\nNumero impar!\n");
     break;
     default: printf("\nNão é par nem ímpar\n");
     break;
  }
  return 0;
}
