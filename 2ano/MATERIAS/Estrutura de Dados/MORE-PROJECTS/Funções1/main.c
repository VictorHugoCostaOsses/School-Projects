#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"
int main()
{
   int va = 10;
   int vb = 20;
   float perimetro,area,x1,x2;
   perimetro=area=0.0;
   x1=x2=0.0;
   printf("\nAntes da troca\n A = %d\nB = %d\n",va,vb);
   troca(&va,&vb);/* & - Se não colocar ele vai pegar os valores na posição 10 e 20 e não o endereço certo */
   printf("\Depois da troca\n A = %d\nB = %d\n",va,vb);
   printf("\n=========================================\n");
   dec(&va,&vb);
   printf("\Incremento e Decremento\n A = %d\nB = %d\n",va,vb);
   printf("\n=========================================\n");
   printf("\nPara um circulo com raio = 10:\n");
   circulo(10,&perimetro,&area);
   printf("\nPerimetro: %5.2f\nArea: %f\n",perimetro,area);
   printf("\n=========================================\n");
   printf("\nQuadrado de lado = 10:\n");
   quadrado(10,&perimetro,&area);
   printf("\nPerimetro: %5.2f\nArea: %5.2f\n",perimetro,area);
   printf("\n=========================================\n");
   printf("\nBhaskara - Equecao do segundo grau : Para a = 5, b = 2 e c = 1\n");
   eq2grau(2,-3,1,&x1,&x2);
   printf("\nx1 = %5.2f\nx2 = %5.2f",x1,x2);


    return 0;
}
