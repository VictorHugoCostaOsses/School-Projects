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
 printf("\n2 - Calcular a área");
 scanf("%d",&escolha);

 switch (escolha)
 {
 case 1:
 printf("\nInforme o raio da circunferência");
 scanf("%f",&r);
 calculo = 2*3.14*r;
 printf("\n O perimetro da circunferência é %3.2f", calculo)
 if ( calculo >0.1 && calculo < 100)
     printf("\n Notificacão");
 break;
 case 2:
 printf("\n Informe o raio");
 scanf("%f", &r);
 calculo = (r*r*3.14);
 printf("\n A área da circunferência é %3.2f", calculo);
 break;
 default: printf("\n Opção invalida");
break;
}
 return 0;
  }
