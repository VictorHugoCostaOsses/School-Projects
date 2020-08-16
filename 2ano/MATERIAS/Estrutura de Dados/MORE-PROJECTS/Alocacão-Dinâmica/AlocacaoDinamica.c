#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void impVetorFloat(float * v1, int nel)
{
    int i;
    for(i=0; i<nel; i++)
    {
        printf("\n %5.2f", v1[i]);
    }
}

int main()
{
    setlocale(LC_ALL,"");

     unsigned  int nAlunos; /* Aceita no máximo o valor 65 e algo*/
    float * medias;

    printf("Número de alunos :");
    scanf("%d", &nAlunos);
    if(nAlunos>0)
    {
        medias = (float * )malloc(nAlunos * sizeof(float )); /* se for 30 alunos vou multiplicar isso vezes o tamanho de um float.
        Se tiver um Bloco com esse tamanho disponivel ele aloca o endereco e depois colaca em medias. Media aloca o endereço dedesse bllco. Obs: malloc é padrão
        (float * ) - Preparando a memória pra recer o tipo float
        */
        if(medias==NULL)
        {
            printf("Falha ao Alocar a memória");
            exit(0);
        }
        for(int n = 0; n<nAlunos; n++)
        {
        printf("%d: ", n+1 );
        scanf("%f",&medias[n]);
        }
        impVetorFloat(medias,nAlunos);
        free(medias); /* Liberar memória */
    }
    else
    {
        printf("Valor inválido!");
    }


}
