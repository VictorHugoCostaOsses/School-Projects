#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    float horaextra,horasfalta,calculo;
    printf("\nInforme o número de horas-extras em minutos");
    scanf("%f", &horaextra);
    printf("\nInforme o número de horas-falta em minutos");
    scanf("%f", &horasfalta);
    calculo = (horaextra-(2/3*(horasfalta)));

    if (calculo > 2400)
    {
    printf("\n Prêmio de 500 reais e as horas extras são de %1.2f horas e suas horas faltadas são de %1.2f horas", horaextra/60, horasfalta/60);
    }
    else if (calculo >= 1801 && calculo <= 2400)
    {
    printf("\nPrêmio de 400 reais e as horas extras são %1.2f horas e suas horas faltadas são  de %1.2f horas", horaextra/60, horasfalta/60);
    }
    else if (calculo >= 1201 && calculo <= 1800)
    {
    printf("\nPrêmio de 300 reais e as horas extras são %1.2f horas e suas horas faltadas são  de %1.2f horas", horaextra/60, horasfalta/60);
    }

    else if (calculo >= 601 && calculo <= 1200)
    {
    printf("\nPrêmio de 200 reais e as horas extras são %1.2f horas e suas horas faltadas são de %1.2f horas ", horaextra/60, horasfalta/60);
    }

    else  if (calculo <= 601 )
    {
    printf("\nPrêmio de 100 reais e as horas extras são %1.2f horas e suas horas faltadas são de %1.2f horas", horaextra/60, horasfalta/60);
    }
    return 0;
}



