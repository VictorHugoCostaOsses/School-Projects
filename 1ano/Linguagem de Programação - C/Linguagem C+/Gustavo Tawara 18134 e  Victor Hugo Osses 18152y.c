#include <stdio.h> /*  a² = diagagonal²/2 */
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL,"");
float milha;
float km;
printf("Digite uma distancia em milhas marítimas");
scanf("%f", &milha);
km = milha*1.852;
printf("O valor da milha marítima em quilômetros é: %f km", km );

}
