#include<stdio.h>

int main(void)
{

    int num;
    printf("Digite um numero");
    scanf("%d",&num);
    if(num>10)
        printf("\n\nO numero e maior que 10");
    if (num%2==0)
    {
        printf("O numero e par");
    }
    else
    {
      printf("\nO numero e impar");
    }
    return(0);
}
