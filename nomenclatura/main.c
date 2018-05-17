#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros
    int *punteroNumero;
    int numero;
    int numeroDos;
    numero=66;
    numeroDos=&numero;//asignacion de memoria
    punteroNumero=&numero;
    printf("\n a- %d",numeroDos);
    numeroDos=*punteroNumero;//asignacion de valor
    printf("\n b- %d",numeroDos);
    //*punteroNumero=&numero;
    //*punteroNumero=55;
    printf("\n%d",numero);
    printf("\n%d",numeroDos);
    printf("\n%d",&numero);
    printf("\n%p",punteroNumero);//muestra la direccion de memoria de la variable
    printf("\n%p",&punteroNumero);//muestra la direccion de memoria del puntero
    printf("\n%d",*punteroNumero);//muestra el valor de la variable. Se le tiene que asignar siempre una direccion de memoria de una variable porque sino no tiene valor


    return 0;
}
