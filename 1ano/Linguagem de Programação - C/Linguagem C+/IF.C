#include<stdio.h>
#include<locale.h>  /* if (condi��o)  % - � o mod  == - � igualdade != - Diferente*/

int main()
{
    setlocale(LC_ALL,"");
    int a,b;
    printf("\nDigite um n�mero");
    scanf("%d",&a);
    b = a%2;
    if(b==0)
    {
        printf("\nNumero � par!\n");
    }
    else
    {
        printf("\nNumero � impar!\n");
    }
    return 0;
}
