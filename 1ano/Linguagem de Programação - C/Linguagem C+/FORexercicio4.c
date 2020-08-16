#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL,"");
 int idade,g,i=0, maior=0 , menor=200;
 for (g=0; g<=10; g++)
    {
    printf("\nInforme sua idade");
    scanf("%d", &idade);
       i+=idade;
       if (maior<idade)
        maior = idade;
       if (menor>idade)
         menor=idade;



 }
printf("\n A média das idades é %d , a maior idade é %d e a menor é %d", i/10, maior, menor);
return 0;
}
