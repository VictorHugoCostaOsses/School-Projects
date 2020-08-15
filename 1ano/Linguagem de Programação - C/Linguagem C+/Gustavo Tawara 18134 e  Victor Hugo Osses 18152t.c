#include <stdio.h> /*  a² = diagagonal²/2 */
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL,"");
float a1;
float a2;
float a3;
float a4;
printf("\nDigite um valor");
scanf("%f", &a1);
printf("\nDigite um valor");
scanf("%f", &a2);
printf("\nDigite um valor");
scanf("%f", &a3);
printf("\nDigite um valor");
scanf("%f", &a4);
printf("\n A média aritimética é %f", (a1+a2+a3+a4)/4);
}
