#include <stdio.h>   /*  a� = diagagonal�/2 */
#include <locale.h>
#include <math.h>

int main()
{
 float diag;
 float are1;
 float a1;
 float a2;
 float a3;
 float a4;
 float ra;
 float area;
 float milha;
 float km;
 float cat1;
 float cat2;
 float hip;
 int z;
 setlocale(LC_ALL,"");
 printf("\nEscolha uma das op��es abaixo");
 printf("\n 1 - Calcular a hipotusa");
 printf("\n 2 - Converter milhas mar�timas para Km");1
 printf("\n 3 - Calcular �rea do circulo");
 printf("\n 4 - M�dia Aritim�tica");
 printf("\n 5 - �rea do quadrado");
 printf("\n 6 - Para sair");
 scanf("%d",&z);


 switch(z)
{
 case 1:
 printf("\nDigite a medida de um cateto");
 scanf("%f",&cat1);
 printf("\nDigite a medida do outro cateto");
 scanf("%f",&cat2);
 hip = (sqr(cat1)+(sqr(cat2));
 printf("\n A hipotenusa equivale a %f", sqrt(hip));
 break;
 case 2:
  printf("Digite uma distancia em milhas mar�timas");
  scanf("%f", &milha);
  km = milha*1.852;
  printf("O valor da milha mar�tima em quil�metros �: %f km", km );
  break;
   case 3:
    printf("\nDigite o valor do raio");
    scanf("%f",&ra);
    area = 3.14*(ra*ra);
    printf("\nA �rea do circulo � %f", area);
    break;
      case 4:
        printf("\nDigite um valor");
        scanf("%f", &a1);
        printf("\nDigite um valor");
        scanf("%f", &a2);
        printf("\nDigite um valor");
        scanf("%f", &a3);
        printf("\nDigite um valor");
        scanf("%f", &a4);
        printf("\n A m�dia aritim�tica � %f", (a1+a2+a3+a4)/4);
        break;
      case 5:
        printf("\n Informe o valor da diagonal do quadrado");
        scanf("%f",&diag);
        are1 = (diag*diag)/2;
        printf("\n A area do quadrado �:%f",sqrt(are1));
        break;
        default: printf("\nOp��o invalida");
        break;
}

 return 0;
}
