#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    float salario;
    printf("\n Informe seu sal�rio para o reajuste");
    scanf("%f", &salario);
    if (salario > 300)
    {
        printf("\n Seu sal�rio reajustado �: R$%1.2f", salario*1.3);
    }
    else
      {
        printf("\n Seu sal�rio reajustado �: R$%1.2f", salario*1.5);
    }
return 0;
}
