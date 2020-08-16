#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
    setlocale(LC_ALL,"");
    int escalar[5],controle,vetor1[5],vetor2[5],nElementos,a;

    printf("Informe o número de elementos \n");
    scanf("%d", &nElementos);

    printf("Informe os valores do vetor1 \n");
    for(controle=0; controle<nElementos; controle++)
    {
        scanf("%d", &vetor1[controle]);
    }

    printf("Informe os valores do vetor2 \n\n");
    for(controle=0; controle<nElementos; controle++)
    {
        scanf("%d", &vetor2[controle]);
    }

    for(controle=0; controle<nElementos; controle++)
    {
        escalar[controle] = vetor1[controle] * vetor2[controle];
        if(vetor1[controle]==vetor2[controle])
        {
            a=1;
        }
    }
for(controle=0; controle<nElementos; controle++)
    {
printf("%d \t",escalar[controle]);
}

if(a=1)
printf("\n\nOs vetores tem elementos em comum");
else
printf("\n\nOs vetores não tem elementos em comum");




}
