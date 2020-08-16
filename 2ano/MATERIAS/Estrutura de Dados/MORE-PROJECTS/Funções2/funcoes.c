
void ex1(int n)
{
    int a;
    printf("\n A seququencia é essa");
    for(a=1; a<=n; a++)
    {
         printf(" \n %d \t",a);
    }

}

int ex2(int n)
{
    int soma=0,a;
    printf("\n A Soma da sequencia é\n");
    for(a=1; a<=n; a++)
    {
        soma=soma+a;
        printf("%d\n",soma);
    }
}



int ex4(int z, int x)
{

    if (z>x)
    {
        printf("\nO primeiro Valor é o maior -1");
    }
    else if (x>z)
    {
    printf("\nO segundo valor é o Maior 1");
    }
}

void ex5(int n)
{
    int a;
    float soma=0;
    for(a=1; a<=n;a++)
    {
      soma=a*2.54;
      printf("\n Conversção de polegadas para cm: %5.2f cm",soma);
    }
}

int ex6(int z , int x)
{
    int i, soma=0;
 for(i=z; i<=x;i++)
 {
     if(i%2==0){
     soma=soma+i;
     }
 }
    printf("A soma dos numeros = %d\n ",soma);
}


