#include<stdio.h>
#include<stdlib.h>
#include "FUNCOES.H"
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float a,b ,c,x ,z;
    float perimetro;
    float area;
    float x1 = 0;
    float x2 = 0;


    printf("\nInforme um valor para o incremento\n");
    scanf("%d", &x);
    printf("\nInforme um valor para o decremento\n");
    scanf("%d", &z);
    dec(&x,&z);
    printf("\nDepois da operacao:\nA = %d\nB = %d\n\n",x,z);

    circulo(2,&perimetro,&area);
    printf("\nO perimetro é %f\nA area é %f ",perimetro,area);

     printf("\nInforme o coeficiente  A");
    scanf("%f", &a);
    printf("\nInforme o coeficiente B");
    scanf("%f", &b);
    printf("\nInforme o coeficiente C");
    scanf("%f", &c);

   scanf("%d",&a);
    scanf("%d",&b);
     scanf("%d",&c);
    eq2grau(a,b,c,&x1,&x2);
    printf("\n x1 = %f\n x2 = %f\n",x1 ,x2);

    system("pause");
}










