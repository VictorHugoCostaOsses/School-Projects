#include<stdio.h>
#include<locale.h>
int main(void)
{

    float media;
    int i,numero,soma=0,qtdN=0,maior=-1,Sair;
    setlocale(LC_ALL,"");
    do
    {
        printf("\n Informe um n�mero");
        scanf("%i", &numero);
        printf("Digite -99 para sair ou qualquer outro n�mero para continuar");
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
printf("\n  A soma do n�meros: %i\n Quantidade de n�meros digitados: %i\n A m�dia dos n�meros digitados: %f\n O maior n�mero digitado: %i",soma,qtdN, media,maior);
 return 0;
}
