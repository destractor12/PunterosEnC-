#include <stdio.h>
#include <stdlib.h>

void Intercambiar(int num1, int num2);
void IntercambiarconPunteros(int *num1, int *num2);

int main()
{
    int edadUno;
    int edadDos;
    edadUno=22;
    edadDos=99;
    IntercambiarconPunteros(&edadUno, &edadDos);
    printf("\n Edad 1:%d\n",edadUno);
    printf("\n Edad 2:%d",edadDos);

    return 0;
}

void Intercambiar(int num1, int num2)
{
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;



}

void IntercambiarconPunteros(int *num1, int *num2)
{
    int aux;
    aux=*num1;
    *num1=*num2;
    *num2=aux;

}
