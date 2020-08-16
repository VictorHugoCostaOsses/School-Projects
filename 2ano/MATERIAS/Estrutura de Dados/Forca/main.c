#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "forca.c"
#include "forca.h"
#include <locale.h>

void copyright(){
    system("cls");
    printf("=============================================================\n\n");
    printf("JOGO DA FORCA\n");
    printf("Desenvolvido por: \n\tVictor Hugo Costa Osses 18152\n");
    printf("\tGustavo Massayoshi Ferreira Tawara 18134\n");
    printf("=============================================================\n\n");
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");

    NoSecreto * lstSecreta = inicializaListaSecreta();
    NoSecreto * lstRetira = inicializaListaSecreta();
    noLetra * lstLetra  = inicializaListaLetra();


    NoSecreto * sorteada;

    int escolha;
    int tentativas=0;
    int tamanho=0;
    int tamanhoL=0;
    int statusLetra=2;
    int v=0;

    char nomeUsu[50]="nome_Usu�rio";
    char fNameArq[255];
    char alfabeto[27]="";
    char letrasJogo[12];
    char assuntoSorteado[50];

    printf("Escolha uma das op��es:\n");
    printf("\n1- Configura��o");
    printf("\n2- Jogar");
    printf("\n0- Sair\n");
    scanf("%d",&escolha);


    switch(escolha)
{
    case 1:
        printf("\nDigite o seu nome:\n");
        scanf("%s",nomeUsu);
        system("cls");
    case 2:
        strcpy(fNameArq,"palavras.dat");
        if(argc>1)
        {
          strcpy(fNameArq,argv[1]);
        }

    copyright();
    printf("Arquivo de dados: %s\n\n",fNameArq);
    system("pause");
    lstSecreta = carregaListaArquivo(lstSecreta,fNameArq);

do{
    CLEAR_SCREEN;
    //imprimeListaSecreta(lstSecreta);
    sorteada = sorteiaPalavra(lstSecreta,lstRetira);
         v=0;
         while(alfabeto[v]!='\0')
         {
               alfabeto[v] = NULL;
               v++;
         }
         if(sorteada!=NULL)
         {

          tentativas = tamanhoPalavra(sorteada);
          tamanho = tentativas;
          tentativas = tentativas*3;

          strcpy(assuntoSorteado,sorteada->assunto);
          lstLetra = insereLetra(lstLetra,sorteada->palavra,tamanho);
          lstSecreta = retiraLista(lstSecreta,lstRetira,sorteada->palavra);
          tamanhoL = 0;

            while(tamanhoL!=tamanho){
            letrasJogo[tamanhoL] = criarTracos(tamanho);
            tamanhoL++;
            }

            printf("O assunto �: %s\n\n",assuntoSorteado);

            system("pause");
            system("cls");
            printf("%s\n\n",assuntoSorteado);
            for(int k=0; k<tamanho;k++)
            {
            printf("%c ",letrasJogo[k]);
            }
             printf("\n\nTentativas restantes: %d",tentativas);
               do{
                printf("\n");
                lstLetra = jogoDaForca(lstLetra,&tentativas,alfabeto,tamanho,letrasJogo,assuntoSorteado);

                if(tentativas == 0)
                {
                system("cls");
                printf("Que pena! Voc� n�o conseguiu advinhar qual era a palavra.\n\n");
                printf("Pressione ENTER para continuar...");
                }

                statusLetra = verificaStatusLetra(lstLetra);

                if(statusLetra==0)
                {
                        printf("\n\nParab�ns %s! Voc� acertou a palavra secreta.\n\n",nomeUsu);
                }
             }while(tentativas > 0 && statusLetra!=0);

            free(lstLetra);
            lstLetra  = inicializaListaLetra();
         }//FIM DO IF
         else{
         printf("N�o tem palavra dispon�vel!\n\n");
         }
}while(getchar()!='f');

break;
case 0:
exit(-1);
break;

}

return 0;
}




