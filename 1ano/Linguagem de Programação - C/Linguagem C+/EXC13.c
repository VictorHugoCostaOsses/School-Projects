#include<stdio.h>
#include<locale.h>
int main(void)
{

    float media;
    int i,numero,soma=0,qtdN=0,maior=-1,Sair;
    setlocale(LC_ALL,"");
    do
    {
        printf("\n Informe um número");
        scanf("%i", &numero);
        printf("Digite -99 para sair ou qualquer outro número para continuar");
        scanf("%d", &Sair);

        soma=soma+numero;

        qtdN++;

        media=(soma/qtdN);

        if(numero>maior)
        {
            maior=numero;
        }

    }
    while (Sair!=-99);
printf("\n  A soma do números: %i\n Quantidade de números digitados: %i\n A média dos números digitados: %f\n O maior número digitado: %i",soma,qtdN, media,maior);
 return 0;
}
