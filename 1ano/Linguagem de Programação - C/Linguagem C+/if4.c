#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int num;
    printf("\nDigite um n�mero");
    scanf("%d",&num);
    if (num>10)
        printf("\n\nO n�mero e maior que 10");
    else if (num == 10)
    {
        printf("O n�mero � igual a 10");
    }
    else if(num<10)
        printf("\n\nO n�mero � menor que 10");
    return(0);
}
