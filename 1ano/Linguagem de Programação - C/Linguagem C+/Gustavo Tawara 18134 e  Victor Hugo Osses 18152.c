#include <stdio.h> /*  a² = diagagonal²/2 */
#include <locale.h>
#include <math.h>

int main()

{
 setlocale(LC_ALL,"");
 printf("\n Informe o valor da diagonal do quadrado");
 float diag;
 float area;
 scanf("%f",&diag);
 area = (diag*diag)/2;
 printf("\n A area do quadrado é:%f",sqrt(area));
}
