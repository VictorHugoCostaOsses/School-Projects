#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* ponteiro para arquivo (região de memoria denominada buffer: Intermeduarui) -
     Bora tentar abrir um arquivo! Primeiro passo: Fazer uma conexão*/

    FILE * arquivo;
    char c; /* todo caractér é um int*/
    int cont=0;
    arquivo = fopen("F:\\2° ano\\ED\\Arquivo\\SD.txt","rt" ); /* Qual arquivo quero abrir e seu endereco - rt quer dizer que o arquivo é de texto e só pra leitura*/
    if(arquivo == NULL)
    {
        printf("Fez errado seu burro");
        exit(1);
    }
    while((c=fgetc(arquivo)) != EOF)/* fgetc: obtém um caracter e guarde em C*/ /* EOF end of file */
    {
      if(c=='\n')
        cont++;
        putchar(c); /*  putchar - Colocar um caracter na saida padrão (monitor)*/
    }
    printf("\n %d\n", cont);

    printf("Arquivo aberto com sucesso!\n");
    fclose(arquivo); /* fechar o arquivo (cortar conexão e liberar memória)*/

    return 0;
}
