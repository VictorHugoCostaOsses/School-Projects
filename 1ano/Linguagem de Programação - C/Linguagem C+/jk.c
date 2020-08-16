#include <stdio.h>
#include <locale.h>
int  main()
/* \n quebra a linha
Se vc digita ".(ponto)"  ele arredonda | com "," ele adiciona as casas decimais que digitou e algumas amais */
{
 setlocale(LC_ALL,"");
 float num;
 printf("\nDigite um número:\n\n");
 scanf("%f",&num);
 printf("O número digitado foi %f\n",num);
}
