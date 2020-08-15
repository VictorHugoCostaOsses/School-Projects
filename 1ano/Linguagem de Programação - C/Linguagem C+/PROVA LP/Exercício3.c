#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    float salario;
    printf("\n Informe seu salário para o reajuste");
    scanf("%f", &salario);
    if (salario > 300)
    {
        printf("\n Seu salário reajustado é: R$%1.2f", salario*1.3);
    }
    else
      {
        printf("\n Seu salário reajustado é: R$%1.2f", salario*1.5);
    }
return 0;
}
