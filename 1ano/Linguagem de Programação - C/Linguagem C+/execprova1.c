#include<stdio.h>
#include<locale.h>
 int main()
{
 setlocale(LC_ALL,"");
 int dia;
 int mes;
 int ano;
 int idade;
 printf("\nInforme o dia do seu nascimento");
 scanf("%d",&dia);
 printf("\n Informe o m�s em que voc� nasceu");
 scanf("%d",&mes);
 printf("\nInforme o ano em que voc� nasceu");
 scanf("%d",&ano);
if mes<9
 {
    idade=2018-ano;
    printf("Sua idade � de %d", idade);
 }
 else
  if mes=9
  {
      if (data<=14)
      {
      idade=2018-ano;
      printf("sua idade � de %d", idade);
      }
      else
      {
        idade=2018-ano-1;
        printf("sua idade � de %d", idade);
      }
  }




 }

