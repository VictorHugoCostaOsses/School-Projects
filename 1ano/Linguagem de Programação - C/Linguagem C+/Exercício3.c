#include<stdio.h>

int main()
{
 char letra
 printf("\nDigite uma letra do alfabeto");
 scanf("%c",letra);
 letra = tolower(letra);
 if (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U');
{
printf("\nA letra %c é uma vogal",letra);
else
printf("\nA letra %c é uma consoante",letra);
}
return 0;


}
