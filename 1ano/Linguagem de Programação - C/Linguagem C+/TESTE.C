#include <stdio.h>   /*  a² = diagagonal²/2 */
#include <locale.h>
#include <math.h>

int main()
{
 setlocale(LC_ALL,"");
 char nome[30];
 float compra;
 int pagamento;
 int parcela;
 printf("\nInforme seu nome");
 scanf("%s",nome);
 printf("\n %s",nome);
 printf("\nInforme o valor da compra");
 scanf("%f", &compra);
 printf("\nEscolha uma das 3 opções");
 printf("\n 1 - Pagar a vista");
 printf("\n 2 - Parcelar em 3 vezes");
 printf("\n 3 - Parcelar de 4 até 6 vezes");
 scanf("%d" , &pagamento);
 switch (pagamento)
 {

 case 1:
     printf("%s escolheu pagar a vista, o preço da compra será de  R$%2.2f", nome,compra*0.9);
     break;

 case 2:
    printf("%s escolheu parcelar em 3 vezes, o preço da compra será de  R$%2.2f", nome,compra);
    break;

 case 3:
    printf("\nEscolha se vai parcelar em 4 , 5 ou 6 vezes");
    printf("\n 1 - Parcelar em 4 vezes");
    printf("\n 2 - Parcelar em 5 vezes");
    printf("\n 3 - Parcelar em 6 vezes ");
    scanf("%d", &parcela);

    switch (parcela)
    {
    case 1:
        printf("\n %s escolheu parcelar em 4 vezes, o preço da compra será de R$%2.2f", nome, compra*1.1);
        printf("\n4 parcelas de  R$%2.2f", compra/4);
        break;
        case 2:
        printf("\n %s escolheu parcelar em 5 vezes, o preço da compra será de  R$%2.2f", nome, compra*1.1);
        printf("4 parcelas de  R$%2.2f", compra/5);
        break;
        case 3:
        printf("\n %s escolheu parcelar em 6 vezes, o preço da compra será de  R$%2.2f", nome,compra*1.1);
        printf("4 parcelas de  R$%2.2f", compra/6);
        break;
        default: printf("\nObrigado por comprar conosco!");
        break;
    }

    default: printf("\nObrigado por comprar conosco!");
     break;
 }


return 0;
}



