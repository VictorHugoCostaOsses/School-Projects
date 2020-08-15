#include <stdio.h> /*  a² = diagagonal²/2 */
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL,"");
float ra;
float area;
printf("\nDigite o valor do raio");
scanf("%f",&ra);
area = 3.14*(ra*ra);
printf("\nA área do circulo é %f", area);
}
