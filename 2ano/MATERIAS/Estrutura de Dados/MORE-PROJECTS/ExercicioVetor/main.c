#include <stdio.h>
#include <stdlib.h>


float mediaGeral(int n, float * v)
{
    int x;
    float md=0;
    for(x=0; x<n; x++)
    {
        md += v[x];
    }
    return md/n;
}

int main()
{
   /* float maior, menor;
    maior=menor=0.0;*/

    float md[5]={7.0,8.0,9.0,4.0,6.0};
    mediaGeral(5, md);

    /*meior_menor(5,media,&maior,&menor);*/

    printf("\n%5.2f ", mediaGeral(5,md));

return 0;
}
