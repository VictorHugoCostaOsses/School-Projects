#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"
// Victor Hugo Costa Osses 18152
// Gustavo Tawara 18134

int main()
{
    setlocale(LC_ALL,"");
   float cont=0;
   float cont2=0;
   int resposta;
   int resposta2;
   Fila * FE = cria();
   Fila * FM = cria();


do
{
 printf("\t \nFILA DOS MILAGRES");
   printf("\t \n1 - Retirar Senha Para Obter Benção Material");
    printf("\t \n2 - Retirar Senha Para Obter Benção Espiritual");
     printf("\t \n3 - Conceder Benção Material");
      printf("\t \n4 - Conceder Benção Espiritual");
       printf("\t \n5 - Mostrar Lista Para Benção Material");
        printf("\t \n6 - Mostrar Lista Para Benção Espiritual");
         printf("\t \n0 - Fechar tenda dos milagres\n");

        printf("\t\n ESCOLHA:");
         scanf("%d",&resposta);

         if(resposta<0 || resposta>6)
         {
            do
             {
               printf("\nOpcão inválida! Escolha novamente:\n");
               scanf("%d",&resposta);
             }while(resposta<0 || resposta>6);
         }






         switch(resposta)
         {
         case 1:
         cont++;
         insere(FM,cont);

         break;

         case 2:
         cont2++;
         insere(FE,cont2);

         break;

         case 3:
               cont--;
         retira(FM);

         break;

         case 4:
         cont2--;
         retira(FE);

         break;

         case 5:
         printf("\nFila Material:\n");
         system("cls");
         imprime(FM);
         system("pause");
         break;

         case 6:
         printf("\nFila Espiritual:\n");
         system("cls");
         imprime(FE);
         system("pause");
         break;

         case 0:
         if(cont>0 || cont2>0)
         {
             printf("\nAinda há pessoas para receber benção");
             printf("\n1: CONTINUAR");
             printf("\n2: CANCELAR");
             scanf("%d",&resposta2);
             if(resposta2==1)
             {
               exit(-1);
             }
         }
        break;

         }
  system("cls");
  printf("\nFila Material: %5.2f",cont);
 printf("\nFila Espiritual: %5.2f\n",cont2);
  }while(1);
         libera (FM);
          libera (FE);
}
