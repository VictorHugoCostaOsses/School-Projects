#include<stdio.h>

int main(void)

{

    int b,soma;

    for(b=1; b<=100; b+=2)

    if(b%2==1)
{
     printf("\n %d ", b);
     soma = soma + b;
}
printf("\n %d", soma);
    return 0;
}
