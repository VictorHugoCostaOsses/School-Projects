#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/* Victor Hugo Costa Osses  18152*/
/* Gustavo Tawara 18134 */


int opcao2(int **m,int k)
{
    int inicio=0;
    int reserva=0;
    int fim=0;
    int linha=0;
    int qtd=0;

    do
    {

        printf("\n1 < Para sair\n");
        printf("1: Reserva sequêncial\n");
        printf("2: Reserva randômica\n");
        scanf("%d", &reserva);

        if(reserva<1)
        return 0;

switch(reserva)
{
        case 1:

            printf("Informe a linha da reserva ( 1 < para sair)\n");
            scanf("%d", &linha);
            if(linha<1)
            return 0;
            printf("Informe o inicio da coluna a ser reservada\n");
            scanf("%d",&inicio);
            printf("Informe o fim da coluna a se reservada\n");
            scanf("%d",&fim);

            for(inicio; inicio<=fim; inicio++)
              {
                   if (m[linha-1][inicio-1]==0)
                   {
                    m[linha-1][inicio-1]=1;
                   }

                   else
                   {
                       printf("\nNão foi possível alocar essa sequência de poltronas");
                   exit(-1);
                   }

              }
              break;



      case 2:


       printf("Informe o número de poltronas a serem reservadas aleatóriamente\n");
       scanf("%d",&qtd);
       srand(time(NULL));

       for(int z = 0; z<=qtd; z++)
          {
        if(k==1)
            {
            int a = rand()%29;
            int b = rand()%14;
            if(m[a][b]==1)
            {
               qtd++;
            }
            else
            m[a][b]=1;
              }


        }
        if(k==2)
        {

        int a = rand()%5;
        int b = rand()%5;
        if(m[a][b]==1)
        {
           qtd++;
        }
        else
        m[a][b]=1;
          }

        break;
        }
} while(1);
}





void imprimeAmbiente(int **m, int lin , int col)
{
    for(int l = 0; l<lin;l++)
    {
        for(int c = 0; c<col;c++)
            {
               if(m[l][c] == 1)
                {
                    printf(" X |");
                }
                else
                printf(" %d |", m[l][c]);
            }
            printf("\n");
    }
}

int reserva (int ** m, int f, int p)
{
    if (m[f-1][p-1]==0)
    { /* Não sei se você colocou o corredor no seu SalaAloisio, como você não passou o salaAloisio com
        o corredor eu fiz sem pensar nele, mas caso tiver ele:*/
         /*if(p==8)
         m[f-1][p]=1;
         else
       */
        m[f-1][p-1]=1;
        return 1;
    }
    else
    return 0;
}

int salvaDados(char * fname, int **m, int f, int p,char * fname2)
{

    FILE *handle;
    FILE *handle2;
    handle = fopen(fname,"wt");
    handle2 = fopen(fname2,"wt");
    if(handle == NULL) return 0;

    fprintf(handle2,"%d;%d\n",f,p);
    fprintf(handle,"%d;%d\n",f,p);
    for(int l=0;l<f;l++)
    {
        for(int c=0;c<p;c++)
        {
            fprintf(handle,"%d;",m[l][c]);
            fprintf(handle2,"%d;",m[l][c]);
        }
        fprintf(handle,"\n");
        fprintf(handle2,"\n");

    }
     fclose(handle);
     fclose(handle2);
return 0;
}

int main()
{   int k=0;
    int evento =0;
    setlocale(LC_ALL,"");
    printf("Informe em qual auditório/evento entrar");
    printf("\n1: SalaAloisio");
    printf("\n2: Laboratório2INFD\n");
    scanf("%d", &evento);

    switch(evento)
    {

    case 1:
    setlocale(LC_ALL,"");
    FILE * fReserva;
    int escolha;
    int fileiras=0, poltronas=0;
    int **ambiente;
    char  linha[1200];/* char  * linha[1200];*/
    char * tok;
    char delim[] = "0";
    int fila, poltrona;
    char fname[]= "D:\\2° ano\\COISAS\\ED\\ed\\SalaAloisio.csv";
    char fname2[]="D:\\2° ano\\COISAS\\ED\\ed\\\SalaAloisio.txt";

    fReserva = fopen(fname,"rt");
    if(fReserva == NULL)
    {
        printf("Falha ao abrir arquivos de dados!");
        exit(-1);
    }


    fscanf(fReserva,"%d;%d", &fileiras, &poltronas);
    printf("Fileiras: %d\n",fileiras);
    printf("Poltronas: %d\n",poltronas);

    ambiente = (int **)malloc(fileiras * sizeof(int *));
    if(ambiente == NULL)
    {
        printf("Falha ao alocar memoria!");
        exit(-1);
    }

    for(int i= 0;i<fileiras;i++)
    {
        int * linha;
        linha = (int *) malloc(poltronas * sizeof(int));
        if(linha == NULL)
        {
            printf("Falha ao alocar memoria!");
            exit(-1);
        }
        ambiente[i] = linha;
    }


    fila=0;
    fgets(linha,1200,fReserva);
    while(fgets(linha,1200,fReserva)!= NULL)
    {
        poltrona = 0;
        tok = strtok(linha, delim);
        while(tok != NULL)
        {
            int v = atoi(tok);
            ambiente[fila][poltrona] = v;
            tok = strtok(NULL,delim);
            poltrona++;
        }
        fila++;
    }



    do
    {
    printf("\n1: Reserva Simples \n");
    printf("2: Reserva de N poltronas\n");
    scanf("%d", &escolha);
    }while(escolha <1 || escolha >2 );

    if(escolha==2)
    {
    k =1;
    opcao2(ambiente,k);
    }


   else if(escolha == 1)
   {
       do

        {
            printf("Fileira(<1 para Sair):");
            scanf("%d", &fila);
            if(fila<1)
            break;
            printf("Poltrona: ");
            scanf("%d", &poltrona);
            if(reserva(ambiente,fila,poltrona))
            printf("Reserva efetuada com sucesso!\n\n");
            else
            printf("Reserva invalida ou indisponivel!\n\n");
            system("pause");
        }while(1);
   }

    fclose(fReserva);
    imprimeAmbiente(ambiente, fileiras , poltronas);
    salvaDados(fname,ambiente, fileiras , poltronas,fname2);
    break;

    case 2:
        {

    setlocale(LC_ALL,"");
    FILE * fReserva;
    int escolha;
    int fileiras=0, poltronas=0;
    int **ambiente;
    char  linha[400];/* char  * linha[1200];*/
    char * tok;
    char delim[] = "0";
    int fila, poltrona;
    char fname[]= "D:\\ed\\Laboratorio2INFD.txt";


    fReserva = fopen(fname,"rt");
    /* 5;5
    0;0;0;0;0;
    0;0;0;0;0;
    0;0;0;0;0;
    0;0;0;0;0;
    0;0;0;0;0;
    */
    if(fReserva == NULL)
    {
        printf("Falha ao abrir arquivos de dados!");
        exit(-1);
    }


    fscanf(fReserva,"%d;%d", &fileiras, &poltronas);
    printf("Fileiras: %d\n",fileiras);
    printf("Poltronas: %d\n",poltronas);

    ambiente = (int **)malloc(fileiras * sizeof(int *));
    if(ambiente == NULL)
    {
        printf("Falha ao alocar memoria!");
        exit(-1);
    }

    for(int i= 0;i<fileiras;i++)
    {
        int * linha;
        linha = (int *) malloc(poltronas * sizeof(int));
        if(linha == NULL)
        {
            printf("Falha ao alocar memoria!");
            exit(-1);
        }
        ambiente[i] = linha;
    }


    fila=0;
    fgets(linha,400,fReserva);
    while(fgets(linha,400,fReserva)!= NULL)
    {
        poltrona = 0;
        tok = strtok(linha, delim);
        while(tok != NULL)
        {
            int v = atoi(tok);
            ambiente[fila][poltrona] = v;
            tok = strtok(NULL,delim);
            poltrona++;
        }
        fila++;
    }



    do
    {
    printf("\n1: Reserva Simples \n");
    printf("2: Reserva de N poltronas\n");
    scanf("%d", &escolha);
    }while(escolha <1 || escolha >2 );

    if(escolha==2)
    {
    k =2;
    opcao2(ambiente,k);
    }


   else if(escolha == 1)
   {
       do

        {
            printf("Fileira(<1 para Sair):");
            scanf("%d", &fila);
            if(fila<1)
            break;
            printf("Poltrona: ");
            scanf("%d", &poltrona);
            if(reserva(ambiente,fila,poltrona))
            printf("Reserva efetuada com sucesso!\n\n");
            else
            printf("Reserva invalida ou indisponivel!\n\n");
            system("pause");
        }while(1);
   }

    fclose(fReserva);
    imprimeAmbiente(ambiente, fileiras , poltronas);
    salvaDados(fname,ambiente, fileiras , poltronas,fname2);
            break;

        }
}





}
