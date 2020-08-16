#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct ponto
    {
    int x;
    int y;
    };

    typedef struct ponto Ponto ;
    /* Da pra redefinir o nome do tipo tipo - */
    typedef float Real ;




   float calcDx(Ponto p1, Ponto p2)
    {
        return  abs(p1.x - p2.x);
    }

     float calcDy(Ponto p1, Ponto p2)
    {
        return  abs(p1.y - p2.y);
    }


int main()
{
    /* Tipo estruturado é conhecido  como Struct */
    /* Não cai na prova tá*/
    /* Prova cai a parte conceitual*/

  Ponto  p1;/* em C simples tenho que declarar aqui*/
  Ponto  p2;
  Real dx;
  Real dy;
  Real resultado =0;


  Ponto percurso[4] = {{5,0}, {10,10},{10,30},{5,25}};
  int quantidade = 4;

  /*percurso[0].x = 5;*/
  /*percurso[4].x = 5;*/


  for(int i =0; i<quantidade; i++)
  {
        if(  i==quantidade-1)
       {
        dx = abs(percurso[i].x - percurso[0].x);
        dy = abs(percurso[i].y - percurso[0].y);
        resultado += sqrt(pow(dx,2)+pow(dy,2));
        break;
      }

      dx = abs(percurso[i].x - percurso[i+1].x);
      dy = abs(percurso[i].y - percurso[i+1].y);
      resultado += sqrt(pow(dx,2)+pow(dy,2));


  }


  Ponto * ptP1;
  Ponto * ptP2;

   p1.x = 10;
   p1.y = 10;

    //descolamento
   p2.x = 20;
   p2.y = 0;

   ptP1 = &p1; // ptP1 está apontando para essa váriavel guardando endereco
   ptP2 = &p2;

   dx = abs((*ptP1).x - (*ptP2).x);
   dy = abs((*ptP1).y - (*ptP2).y); // especificando o que pegar já que lá

   dx = calcDx(p1,p2);
   dy = calcDx(p1,p2);



   dx = abs(p1.x - p2.x);
   dy = abs(p1.y - p2.y);
  // abs - Valor absoluto ou módulo

   /*distancia = sqrt(pow(dx,2)+pow(dy,2)); // pow - POWER de potencia
   printf("P1.x = %d\t P1.y = %d\n", (*ptP1).x,(*ptP1).y);
   printf("P2.x = %d\t P2.y = %d\n", p2.x,p2.y);*/
   printf("Distancia entre P1 e P2 = %5.2f\n\n", resultado);






    return 0;
}
