#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"

int main()
{
  setlocale(LC_ALL,"");
  int a=20, b=30;
  float perimetro=0;
  float area=0,x=0,k=0,z=0,x1=0,x2=0;


  printf("\n Exerc�cios resolvidos\n\n");
  printf("\n Exerc�cio 1)\n");
  printf("\n Antes da troca\n a = %d \n b = %d\n\n",a,b);

  troca(&a,&b);
  printf("\n Depois da troca\n a = %d \n b = %d\n\n",a,b);

  printf("\n***********************************************\n");

  printf(" Exerc�cio 2)\n");
  decInc(&a,&b);
  printf("\n Incremento = %d \n Decremento = %d",a,b);

  printf("\n***********************************************\n");
  printf(" Exerc�cio 3)\n");
  circulo(10,&perimetro,&area);
  /* &perimetro - Endere�o de mem�ria fique guardado em * perimetro do funcoes.c */
  printf("\n Area = %5.2f \n Per�metro = %5.2f", perimetro,area);

  /* "*" perimetro: Pegue o valor contido nesse endere�o */ /* s� perimetro = Pegue a posi��o de mem�ria do &perimetro*/

  printf("\n***********************************************\n");

  printf(" Exerc�cio 4)\n");
  quadrado(5,&perimetro,&area);
  printf("\n Area = %5.2f \n Per�metro = %5.2f\n", perimetro,area);

  printf("Informe o valor do coeficiente A:");
  scanf("%f",&x);
  printf("Informe o valor do coeficiente B:");
  scanf("%f",&k);
  printf("Informe o valor do coeficiente C:");
  scanf("%f",&z);
  eq2grau(x,k,z,&x1,&x2);
  printf("\nx1 = %5.2f\nx2 = %5.2f\n",x1,x2);




system("pause");

}
