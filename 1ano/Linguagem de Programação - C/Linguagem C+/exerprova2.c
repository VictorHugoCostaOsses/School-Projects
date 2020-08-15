#include<stdio.h>
#include<locale.h>
int main()

{

 setlocale(LC_ALL,"");
 float nota1;
 float nota2;
 float nota3;
 float media;
 printf("\nInforme a sua nota do laboratório");
 scanf("%f",&nota1);
 printf("\nInforme a nota da avaliação semestral");
 scanf("%f",&nota2);
 printf("\nInforme a nota do exame final");
 scanf("%f",&nota3);
 media = ((nota1*2)+(nota2*3)+(nota3*5))/10;

 if    (media>0 && media<=4.9)
 {
   printf("A sua nota foi: %f e sua classificação é E",media);
 }
 if    (media>4.9 && media<=5.9)
 {
   printf("A sua nota foi: %f e sua classificação é D",media);
 }
 if    (media>5.9 && media<=6.9)
 {
   printf("A sua nota foi: %f e sua classificação é C",media);
 }
 if    (media>6.9 && media<=7.9)
 {
   printf("A sua nota foi: %f e sua classificação é B",media);
 }
 else if    (media>7.9 && media<=10)
 {
   printf("A sua nota foi: %f e sua classificação é A",media);
 }




}
