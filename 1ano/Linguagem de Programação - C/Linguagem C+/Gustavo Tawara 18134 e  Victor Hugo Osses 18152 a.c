#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
 setlocale(LC_ALL,"");
 float r;
 float calculo;
 int escolha;

 printf("\n1 - Calcular o perimetro");
 printf("\n2 - Calcular a �rea");
 scanf("%d",&escolha);

 switch (escolha)
 {
 case 1:
 printf("\nInforme o raio da circunfer�ncia");
 scanf("%f",&r);
 calculo = 2*3.14*r;
 printf("\n O perimetro da circunfer�ncia � %3.2f", calculo)
 if ( calculo >0.1 && calculo < 100)
     printf("\n Notificac�o");
 break;
 case 2:
 printf("\n Informe o raio");
 scanf("%f", &r);
 calculo = (r*r*3.14);
 printf("\n A �rea da circunfer�ncia � %3.2f", calculo);
 break;
 default: printf("\n Op��o invalida");
break;
}
 return 0;
  }
