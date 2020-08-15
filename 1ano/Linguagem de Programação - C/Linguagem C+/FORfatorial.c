#include<stdio.h>

int main(void)
{
    int n;
    int i;
    int e=1;
    printf("\nInforme um numero");
    scanf("%d", &n);

    for(i=1; i<=n;i++)
    {
        e=i*e;
    }
      printf("\n %d" ,e);
    return 0;
}
