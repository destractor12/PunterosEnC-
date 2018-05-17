#include <stdio.h>
#include <stdlib.h>
void mostrar(int *puntero, int cantidad);

int main()
{
    int numeros[3];
    int *puntero;
    int auxiliar=333;

    puntero=numeros;
    numeros[0]=9;
    numeros[1]=11;
    numeros[2]=13;
    printf("\n puntero : %d", *(puntero-2));
    printf("\n puntero : %d", *(puntero+1));
    printf("\n puntero : %d", *(puntero+2));
    printf("\n puntero : %d", *(puntero+3));
    printf("\n puntero : %d", *(puntero+4));


    mostrar(numeros, 3);

    return 0;
}

void mostrar(int *puntero, int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\nnumero : %d", *(puntero+i));//a través del asterisco se obtiene el valor y sin el asterisco te tira la memoria
    }
}
