#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL,"");
    int n;
    printf("\nOs n�meros pares entre 0 e 50 s�o:");
    for (n=0; n<=50; n+=2)
    {
       printf("%d\n", n);
    }
    return 0;
}
