#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//define um nome alternativp para o tipo struct aluno
typedef struct aluno Aluno;

//define um novo tipo aluno
struct aluno{
    char ra[6];
    float media;
};

typedef struct no No;
struct no{
float media;
No * prox
};

/*
int main()
{
   No * lista;
   No * novo;
   int count=0;
   float media=0;
   lista = NULL; ste lista como vazinha
   novo = (No *) malloc(sizeof(No));



   novo->media= 8.6;
   novo->prox= lista;
   lista = novo;

   novo = (No *) malloc(sizeof(No));
   novo->media= 6;
   novo->prox= lista;
   lista = novo;

     No * aux = lista;
   printf("Medias:\n");
   for(aux; aux!=NULL; aux = aux->prox)
   {
     printf("%5.2f", aux->media);
    media += aux->media;
    count++;
   }
  printf("\n%5.2f", media/count);

return 0;
}*/


/*
int mainY()
{
    setlocale(LC_ALL,"");
    Aluno * infd2;
    float mediaGeral =0;
    int n;
     alolcar memoria para um vetor de nAlunos
    int nAlunos;
    printf("\nInforme o número de alunos: ");
    scanf("%d", &nAlunos);
    infd2 = (Aluno*) malloc(nAlunos * sizeof(Aluno));


   for(n=0; n<nAlunos; n++){
         printf("RA: ");
         scanf("%s",&infd2[n].ra);
         printf("Media: ");
         scanf("%f",&infd2[n].media);
     }

      system("cls"); //limpa tela


        for(n=0; n<2; n++){  n aqui é uma variável LOCAL
        printf("RA : %s\t\tMedia : %5.2f\n",infd2[n].ra, infd2[n].media);
        mediaGeral+=infd2[n].media;
          }

    printf("Media geral da classe: %5.2f\n",mediaGeral/n);

}*/

/*
void main()
{
    float medias[2][3];
    int x=0;
    int y=0;
    int k=0;
    int soma[2];
     float valor;
    for(x=0; x<2;x++)
    {
        for(y=0; y<3;y++)
        {
            printf("Informe o valor:");
            scanf("%f",&valor);
            medias[x][y]=valor;
            soma[x]+=medias[x][y];
            printf("%f\n", medias[x][y]);
        }

        printf("\nMedia:");
        printf("%f",soma[x]);
        soma=0;
    }

}
*/


int main()
{
     Aluno infd2;
     strcpy(infd2.ra, "12345"); /*string copy, não é possivel fazer comparações diretas com string*/
     infd2.media = 7.5;

     Aluno infd3;
     strcpy(infd3.ra, "12645");
     infd3.media = 5.5;

     printf("RA : %s\t\tMedia : %5.2f\n",infd2.ra, infd2.media);
      printf("RA : %s\t\tMedia : %5.2f\n",infd3.ra, infd3.media);

     Aluno infd2[2];

     float media;
     float * pMedia;
     pMedia = &media;
     *pMedia = 8.5;

    printf("&media = %f\n",media);
    printf("pMedia = %f\n",*pMedia);

     pMedia = (float *) malloc(sizeof(float));/*typecast: modelagem: preparando a memória para ser acessada*/
     printf("pMedia = %d\n",pMedia);
     *pMedia = 7.1;

     printf("%5.2f\n",media);
     printf("%5.2f\n",*pMedia);

      free(pMedia);


     float mediaGeral=0;
     int n;
     for(n=0; n<2; n++){
         printf("RA: ");
         scanf("%s",&infd2[n].ra);
         printf("Media: ");
         scanf("%f",&infd2[n].media);
     }

     system("cls");


        for(n=0; n<2; n++){
        printf("RA : %s\t\tMedia : %5.2f\n",infd2[n].ra, infd2[n].media);
        mediaGeral+=infd2[n].media;
          }

    printf("Media geral da classe: %5.2f\n",mediaGeral/n);



    return 0;
}


/*
int main()
{
    float medias[2][3];
    int x=0;
    int y=0;
    float soma[2]={0,0};
    float valor;

    for(x=0; x<2;x++)
    {
        printf("\nInforme as notas\n");
        for(y=0; y<3;y++)
        {
            scanf("%f",&valor);
            medias[x][y]=valor;
            soma[x]+=medias[x][y];

           if(y==2)
           { for(y=0; y<3;y++)
             {
               printf("\nNota %d = %f\t", y+1,medias[x][y]);
             }
           }
        }

        printf("\nMedia:");
        printf("%f\n",(soma[x])/3);

    }

 float mediaGeral=0;


     mediaGeral+=soma[0];
      mediaGeral+=soma[1];


 printf("\nMedia geral: %f", mediaGeral/2);

}


struct no novo;

novo.proximo = l;
l = novo; 2guarda o endereço de novo, porque ele é uma variavel do tipo ponteiro*/

