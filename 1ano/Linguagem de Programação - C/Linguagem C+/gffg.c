#include<stdio.h>
#include<locale.h>
//Fa�a um programa em C  que obtenha a idade da 10
//pessoas. Exibir a m�dia de idade,  a maior e menor


int main(void)
{
   setlocale(LC_ALL,"");
   int g,i,soma=1;
   printf("\n Informe um n�mero");
   scanf("%d", &i);

    while (i>0)
    {
    g=i;
    soma=soma*g;
    i--;
   }
   printf("\n %d", soma);


 return 0;
}
