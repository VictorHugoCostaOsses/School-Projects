#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"");
    float s,s2, mediaS, porcentagem, media, porc, mediaF;
    int f,sair, qtdT, qtdP, maior;

     do
     {
         printf("\nInforme o seu salario:");
         scanf("%f",&s);
         printf("\nInforme a quantidade de filhos");
         scanf("%i", &f);
         printf("\nDigite -99 para sair ou qualquer número pra continuar:");
         scanf("%i", &sair);

         s2=s+s2;

         qtdT++;



         if(s=<320)

         {
            qtdP++;
            porcentagem=((100/qtdT)*qtdP);
         }

     }
    while (sair!=-99);

    printf("\nA média do salário da população: %f \nA média de filhos na cidade é: %i \nO maior salário: %f  \nPorcentagem de pessoas com salario + de 320: %f", mediaS, mediaF, maior, porcentagem );
    return 0;
}
