#include<stdio.h>
#include<locale.h>

int main()
{
setlocale(LC_ALL,"");
float compra;
float venda;
printf("\nQual o valor da compra do produto");
scanf("%f",&compra);
if (compra<20)
{
venda = (compra+(0.45*compra));
printf("\nSeu lucro foi de R$ %f",venda);
}
else
{
venda = (compra+(0.30*compra));
 printf("\nSeu lucro foi de R$ %f",venda);

}

return 0;
}

