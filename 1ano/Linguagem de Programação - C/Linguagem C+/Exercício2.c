#include<stdio.h>
#include<locale.h>

int main()
{
  setlocale(LC_ALL,"");
  float quilometro;
  float litro;
  float calculo;
  printf("\nInforme quantos Km vc andou e quantos litros voc� gastou");
  scanf("%f",&quilometro);
  printf("\n Quantos litros voc� gastou nesse percursso?");
  scanf("%f",&litro);
  calculo = quilometro/litro;
  printf("\nO consumo estimado do carro �:%f",calculo);
}
