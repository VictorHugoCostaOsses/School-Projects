#include <stdio.h>
#include <locale.h>
int  main()
/* \n quebra a linha
Se vc digita ".(ponto)"  ele arredonda | com "," ele adiciona as casas decimais que digitou e algumas amais */
{
 setlocale(LC_ALL,"");
 float num;
 printf("\nDigite um n�mero:\n\n");
 scanf("%f",&num);
 printf("O n�mero digitado foi %f\n",num);
}
