#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * maisculo(char * s)
{
    for(int n=0; s[n]!= '\0'; n++)
    {
        if(s[n] >=97 && s[n] <=122)
        {
            s[n] = s[n]-32;
        }
    }
    return s;

}


int tamanho(char * tamanho)
{
    int cont=0;
     for(int n=0; tamanho[n]!= '\0'; n++)
    {

            cont++;
    }
    return cont;
}


int main(int argc, char **argv) /* argc - argumente count  : Quantas informacoes foram passsadas para o programa||
                                   argv - argument value :  Valores dos argumentos*/
{


    char s;
    char nome4[3][51];
    for(int x=0; x<argc; x++)
    {



    /*nome[0] = 'J';
    nome[1] = 'A';
    nome[2] = 'M';
    nome[3] = '\0';*/ /* Marcador de fim de string*/

  /*
    strcpy (nome4[0],"JAMANTA");
    strcpy (nome4[1],"JAMAN");
    strcpy (nome4[2],"JA");*/

    strcpy(nome4[x],argv[x]);
    }

    char nome2[50]={'J','A','M'};
    char nome[50] = "jam espaco";


/*  strcpy (nome,"JAMM2"); /* É CHAR  (só aceita um caracter), mas com essa funcao aceita mais

    printf("%s\n", nome);
    printf("%s\n", nome2);
    printf("%s\n", nome3);
    printf("%c = %d", ch+32,ch+32);  Imprime o valor convencional no ASCII - 65 = A 97 = a

    printf("%s\n", maisculo(nome));

*/
/*  OBS: Project - Set Program´s arguments , mas tem que criar um projeto ne animal*/
    for(int i =0; i<argc; i++)
    {
         printf("%s\n",maisculo(nome4[i]));
          printf("Tamanho : %d\n", tamanho(nome4[i]));
    }

}
