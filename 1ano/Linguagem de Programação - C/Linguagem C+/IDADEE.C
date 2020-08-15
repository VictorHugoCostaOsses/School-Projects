#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL,"");
    int idade;
    int quantidade=0,quantidade2=0;
    int g;

    for (g=1; g <= 1000000; g++)

              {

                 printf("\nInforme sua idade");
                 scanf("%d", &idade);

                  if (idade <= 21 )

                      {
                       quantidade++;
                      }

                       else if  (idade >= 50)
                        {
                            quantidade2++;
                        }

     }
      printf("\n O total de pessoas com menos ou com 21 anos é: %d \n O total de pessoas com mais ou com 50 anos é: %d", quantidade,quantidade2);


    return 0;
}

