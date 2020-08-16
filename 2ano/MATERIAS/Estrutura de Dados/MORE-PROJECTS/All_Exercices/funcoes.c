#include <math.h>
void troca(int * a,int * b)
{
    int aux = * a;
    *a=*b;
    *b=aux;
}

void decInc(int * a, int * b)
{
    *a+=1;
    *b-=1;
}

void circulo(float raio, float * perimetro, float * area)
{

    *perimetro = (2 * 3.14 * raio);
    *area = (3.14 * raio * raio);
}

void quadrado(float lado, float *perimetro, float * area)
{
    *perimetro = 4*lado;
    *area = lado*lado;
}

void eq2grau(float x,float k,float z ,float * x1,float* x2)
{
    float delta=0;
    delta =  k*k -1*(4*x*z);
    if(delta>=0)
    {
    *x1 = (-1*k + sqrt(delta))/2*x;
    *x2 = (-1*k - sqrt(delta))/2*x;
    }
    else{
        *x1=0,1;
        *x2=0,2;
    }

}

