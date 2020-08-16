#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* ponteiro para arquivo (regi�o de memoria denominada buffer: Intermeduarui) -
     Bora tentar abrir um arquivo! Primeiro passo: Fazer uma conex�o*/

    FILE * arquivo;
    char c; /* todo caract�r � um int*/
    int cont=0;
    arquivo = fopen("F:\\2� ano\\ED\\Arquivo\\SD.txt","rt" ); /* Qual arquivo quero abrir e seu endereco - rt quer dizer que o arquivo � de texto e s� pra leitura*/
    if(arquivo == NULL)
    {
        printf("Fez errado seu burro");
        exit(1);
    }
    while((c=fgetc(arquivo)) != EOF)/* fgetc: obt�m um caracter e guarde em C*/ /* EOF end of file */
    {
      if(c=='\n')
        cont++;
        putchar(c); /*  putchar - Colocar um caracter na saida padr�o (monitor)*/
    }
    printf("\n %d\n", cont);

    printf("Arquivo aberto com sucesso!\n");
    fclose(arquivo); /* fechar o arquivo (cortar conex�o e liberar mem�ria)*/

    return 0;
}
