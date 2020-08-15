#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int num;
    printf("\nDigite um número");
    scanf("%d",&num);
    if (num>10)
        printf("\n\nO número e maior que 10");
    else if (num == 10)
    {
        printf("O número é igual a 10");
    }
    else if(num<10)
        printf("\n\nO número é menor que 10");
    return(0);
}
