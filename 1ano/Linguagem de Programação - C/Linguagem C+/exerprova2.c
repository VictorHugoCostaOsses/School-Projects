#include<stdio.h>
#include<locale.h>
int main()

{

 setlocale(LC_ALL,"");
 float nota1;
 float nota2;
 float nota3;
 float media;
 printf("\nInforme a sua nota do laborat�rio");
 scanf("%f",&nota1);
 printf("\nInforme a nota da avalia��o semestral");
 scanf("%f",&nota2);
 printf("\nInforme a nota do exame final");
 scanf("%f",&nota3);
 media = ((nota1*2)+(nota2*3)+(nota3*5))/10;

 if    (media>0 && media<=4.9)
 {
   printf("A sua nota foi: %f e sua classifica��o � E",media);
 }
 if    (media>4.9 && media<=5.9)
 {
   printf("A sua nota foi: %f e sua classifica��o � D",media);
 }
 if    (media>5.9 && media<=6.9)
 {
   printf("A sua nota foi: %f e sua classifica��o � C",media);
 }
 if    (media>6.9 && media<=7.9)
 {
   printf("A sua nota foi: %f e sua classifica��o � B",media);
 }
 else if    (media>7.9 && media<=10)
 {
   printf("A sua nota foi: %f e sua classifica��o � A",media);
 }




}
