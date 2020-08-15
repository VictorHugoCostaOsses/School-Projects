#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"");
  float peso;
  float altura;
  float IMC;
  printf("Digite seu peso:\n");
  scanf("%f",&peso);
  printf("Digite sua altura:\n");
  scanf("%f",&altura);
  IMC = peso/(altura*altura);
  printf("\nSeu IMC é de: %f\n",IMC);
  printf("\n----------------------------------------");
  printf("\n|        IMC       |     Categoria    |");
  printf("\n|  Abaixo de 18,5  | Abaixo do peso   |");
  printf("\n|  de 18,5 até 24,9| Peso normal      |");
  printf("\n|  de 25 até 29,9  | Sobrepeso        |");
  printf("\n|  de 30 até 34,9  | Obesidade grau I |");
  printf("\n|  de 35 até 39,9  | Obesidade grau II|");
  printf("\n|  acima de 40     | Obesidade Mórbida|");
  printf("\n----------------------------------------");

}
