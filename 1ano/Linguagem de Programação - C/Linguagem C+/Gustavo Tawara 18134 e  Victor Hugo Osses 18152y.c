#include <stdio.h> /*  a� = diagagonal�/2 */
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL,"");
float milha;
float km;
printf("Digite uma distancia em milhas mar�timas");
scanf("%f", &milha);
km = milha*1.852;
printf("O valor da milha mar�tima em quil�metros �: %f km", km );

}
