#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    printf("Bem vindo a Loteria do seu Zé\n");

    int resultado[6];
    int jogo[10];
    int controle;
    int controle2;
    int cont=0;

    printf("\nInforme os valores em que quer apostar\n");

    for(controle=0; controle<10; controle++)
    {
        scanf("%d",&jogo[controle]);
    }

   srand(time(NULL));


    for (controle = 0; controle < 6; controle++)
  {
    resultado[controle] = rand() % 15;
    printf("%d\t",resultado[controle]);
  }

  for(controle=0; controle < 10 ; controle++)
  {
      for(controle2=0; controle2 < 6 ; controle2++)
      {
          if(jogo[controle]=resultado[controle2])
          {
                cont+=cont;
          }

      }
  }

   if(cont=1)
  {
      printf("\n Acertou 1");
  }
  else if(cont=2)
  {
      printf("Acertou 2");
  }
  else if(cont=3)
  {
      printf("Acertou 3");
  }
  else if(cont=4)
  {
      printf("Acertou 4");
  }
 else if(cont=5)
  {
      printf("Acertou 5");
  }
  else if(cont>=6)
  {
       printf("\n Acertou 6. Ganhou!");
  }
  else
    printf("Acertou 0");


    return 0;
}
