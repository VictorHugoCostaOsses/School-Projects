#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL,"");
    int n,i=0;
    printf("\nOs n�meros pares entre 100 e 200 s�o:");
    for (n=100; n<=200; n+=7)
    {
        i+=n;
    }
    printf("%d\n", i);
    return 0;
}

