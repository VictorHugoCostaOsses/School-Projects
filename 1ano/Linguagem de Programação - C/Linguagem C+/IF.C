#include<stdio.h>
#include<locale.h>  /* if (condição)  % - É o mod  == - É igualdade != - Diferente*/

int main()
{
    setlocale(LC_ALL,"");
    int a,b;
    printf("\nDigite um número");
    scanf("%d",&a);
    b = a%2;
    if(b==0)
    {
        printf("\nNumero é par!\n");
    }
    else
    {
        printf("\nNumero é impar!\n");
    }
    return 0;
}
