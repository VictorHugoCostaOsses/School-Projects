#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sala [4][5];
   int fila, pos;
   for(int l=0; l<4; l++)
     for(int c=0; c<5; c++)
      sala [l] [c] = 0;

    do{
       system("cls");
       printf("Fileira: ");
       scanf("%d",&fila);
    if (fila<0) break;
       printf("Posição: ");
       scanf("%d",&pos);
       //checa disponibilidade ou reserva if disponivel

       if(sala[fila][pos]==0)
       {
         sala [fila][pos];
         printf("Reserva efetuada com sucesso! \n\n")
       }
       else
       {
        printf("Maquina indisponivel!\n\n")
       }
       system("pause");
    }while (fila>=0);
       system("cls");
       for(int l=0; l<4; l++)
       {
         for(int c=0; c<5; c++)
            printf("%d | ",sala [l][c]);
         printf("\n");
       }

    }


    return 0;
}
