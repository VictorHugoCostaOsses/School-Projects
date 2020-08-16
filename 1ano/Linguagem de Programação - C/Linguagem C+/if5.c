#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int num;
    printf("Digite um numero");
    scanf("%d",&num);
    if(num==10)
    {
        printf("O numero e igual a 10.\n");
    }
    else
    {
        if(num>10)
        {
            printf("O numero e maior que 10");
        }
        else
        {
            printf("O numero e menor que 10");
        }

    }
    return(0);
}

