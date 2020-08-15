#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(void)
{
  setlocale(LC_ALL,"");
  int n;
  int i;

  printf("\nEscolha um numero para saber sua tabuada :\n");
  scanf("%d", &n);

  for (i = 0; i<=10; i++)
  {
     printf("\n  %d x %d = %d" ,n,i,i*n);
  }
return 0;
}
