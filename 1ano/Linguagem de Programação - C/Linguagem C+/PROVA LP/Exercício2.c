#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    float horaextra,horasfalta,calculo;
    printf("\nInforme o n�mero de horas-extras em minutos");
    scanf("%f", &horaextra);
    printf("\nInforme o n�mero de horas-falta em minutos");
    scanf("%f", &horasfalta);
    calculo = (horaextra-(2/3*(horasfalta)));

    if (calculo > 2400)
    {
    printf("\n Pr�mio de 500 reais e as horas extras s�o de %1.2f horas e suas horas faltadas s�o de %1.2f horas", horaextra/60, horasfalta/60);
    }
    else if (calculo >= 1801 && calculo <= 2400)
    {
    printf("\nPr�mio de 400 reais e as horas extras s�o %1.2f horas e suas horas faltadas s�o  de %1.2f horas", horaextra/60, horasfalta/60);
    }
    else if (calculo >= 1201 && calculo <= 1800)
    {
    printf("\nPr�mio de 300 reais e as horas extras s�o %1.2f horas e suas horas faltadas s�o  de %1.2f horas", horaextra/60, horasfalta/60);
    }

    else if (calculo >= 601 && calculo <= 1200)
    {
    printf("\nPr�mio de 200 reais e as horas extras s�o %1.2f horas e suas horas faltadas s�o de %1.2f horas ", horaextra/60, horasfalta/60);
    }

    else  if (calculo <= 601 )
    {
    printf("\nPr�mio de 100 reais e as horas extras s�o %1.2f horas e suas horas faltadas s�o de %1.2f horas", horaextra/60, horasfalta/60);
    }
    return 0;
}



