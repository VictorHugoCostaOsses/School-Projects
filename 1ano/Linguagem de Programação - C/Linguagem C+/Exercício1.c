#include<stdio.h>
#include<locale.h>
int main()
{
   setlocale(LC_ALL,"");
   float raio;
   float perimetro;
   float area;
   int z;

   printf("\n0- Para calcular o perimetro");
   printf("\n1- Para calcular a área");
   scanf("%d",&z);
   switch (z)

   {
    case 0:
    printf("\nInforme o valor do raio");
    scanf("%f",&raio);
    perimetro = 2*raio*3.14;
    printf("\nO perimetro da circunferência é %f",perimetro);
    if ((perimetro>0.1) && (perimetro<100))
    printf("\nO raio não está no valor que se recomenda");
    break;
    case 1:
    printf("\nInforme o valor do raio");
    scanf("%f",&raio);
    area = 3.14*(raio*raio);
    printf("\nA área de cirfunferência é: %f",area);
    break;
    default: printf("\nOpção invalida");
    break;
    }


return 0;
}
