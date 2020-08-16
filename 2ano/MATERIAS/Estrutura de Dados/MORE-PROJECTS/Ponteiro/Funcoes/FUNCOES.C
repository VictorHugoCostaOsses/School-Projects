#include<math.h>
#include "FUNCOES.H"

void dec(int * x , int * z)
{
 *x=*x+1;
 *z=*z-1;
}

void circulo(float raio, float  * perimetro, float * area)
{
   *perimetro = 2*3*raio;
   *area = 3.14*raio*raio;
}


void eq2grau(float a, float b, float c, float * x1, float * x2)
{
    float  delta=0;
    delta=b*b+(-1*(4*a*c));

    *x1=((-1*b+sqrt(delta))/2*a);
    *x2=((-1*b-sqrt(delta))/2*a);

}
