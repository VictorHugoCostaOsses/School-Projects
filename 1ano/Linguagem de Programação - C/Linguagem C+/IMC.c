#include<stdio.h>
  /* Operador AND = && operdador OR - || */
int main()
{
   float peso;
   float altura;
   float IMC;
   printf("\nInforme sua altura");
   scanf("%f",&altura);
   prinft("\nInforme seu peso");
   scanf("%f",&peso);
   IMC = peso/(altura*altura);



   if (IMC<18.5)
   {
      printf("\nAbaixo do peso!");
   }

   else if(IMC >= 18.5 && IMC =< 24.9)
   {
      printf("\nPeso Normal!");
   }

   else if(IMC>=25 && IMC=<29.9)
   {
       printf("\nSobrepeso!");
   }

   else if(IMC>=30 && IMC=<34.9)
   {
       printf("Obesidade grau I!");
   }

   else if(IMC>=35 && IMC=<39.9)
   {
       printf("Obesidade grau II!!!");
   }

   else
   {
       printf("Obesidade Mórbida!!!");
   }

 return (0);
}






