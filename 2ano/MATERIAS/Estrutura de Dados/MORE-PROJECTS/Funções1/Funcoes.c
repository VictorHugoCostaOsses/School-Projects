#include<math.h>
void troca(int * a,int * b)
{
    int aux = *a;
    *a=*b;
    *b=aux;
}

void dec(int * a,int * b)
{
    *a=*a+1;
    *b=*b-1;
}

void circulo(float raio, float * perimetro, float * area)
{
    *perimetro = 2 * 3.14 * raio;
    *area = 3.14* pow(raio,2);
}

void quadrado(float lado, float * perimetro, float * area)
{
    *perimetro = 4*lado;
    *area = lado*lado;
}

void eq2grau(float a, float b, float c,float * x1,float * x2 )
{
    float delta = (b*b) - (4*a*c);
    if(delta>=0)
    {
    *x1 = (-b + sqrt(delta))/2*a;
    *x2 = (-b - sqrt(delta))/2*a;
    }

}
