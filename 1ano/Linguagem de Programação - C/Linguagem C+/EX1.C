#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL,"");
    int n,i=0;
    printf("\nOs números pares entre 100 e 200 são:");
    for (n=100; n<=200; n+=7)
    {
        i+=n;
    }
    printf("%d\n", i);
    return 0;
}

