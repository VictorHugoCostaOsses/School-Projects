#include<stdio.h>
#include<locale.h>         /*Fazer um programa que leia 10 vezes a forma de pagamento V - a vista P - prazo, exibir: menor,maior,total dos valores,qtd de P e V
                            E ter validação e digitar s pra sair*/
:
int main(void)
{
    setlocale(LC_ALL,"");
    char pagamento;
    int i,escolha;
    float b;
    for (i = 1; i<=10; i++)
    {
        do
        {

        }
        printf("\nInforme a forma de pagamento");
        printf("\n  V - Transação a Vista ");
        printf("\n  P - Para Trasação a Prazo");
        scanf("%c",&pagamento);


        }
    }
    return 0;
}
