#include <stdio.h>
#include <stdlib.h>

int cargarArray (int*, int); // RECIBE UN PUNTERO, Y RECIBE UN ENTERO.
void mostrarArray (int*, int);


int main()
{
    int vector[3];


    if (cargarArray(vector, 3))
    {
        printf("Carga exitosa!\n");
    }
    else
    {
        printf("Error al cargar datos\n");
    }

    mostrarArray(vector, 3);


    return 0;
}


int cargarArray (int* array, int tam)
{
    int i;
    int retorno = 0;

    if (array!=NULL) // Si no es NULO, el retorno va a ser 1.
    {
        retorno = 1;
        for (i=0; i<tam; i++)
        {
        printf("Ingrese un numero: ");
        scanf("%d", array+i); //   SE HACE ASI PARA PASAR LA DIRECCION DE MEMORIA. QUE ES LO QUE SE NECESITA. PARA ESCRIBIR EN ELLA
        }
    }
return retorno;
}

void mostrarArray(int* array, int tam)
{
    int i;



    for (i=0; i<tam; i++) // FOR PARA MOSTRAR
    {
        printf("%d\n", *(array+i)); // SE HACE ASI PARA OBTENER LO QUE HAY ESCRITO EN ESA DIRECCION DE MEMORIA. (VALOR ESCRITO)

    }

}





/*

//int *puntero; ESTO ES AL PEDO SI TENGO UNA FUNCION
    //puntero = vector;

    // ACA MUESTRO LAS 3 DIRECCIONES DE MEMORIA DE IGUAL MANERA.
    printf("%d\n", vector);
    printf("%d\n", &vector[0]);
    printf("%d\n", &vector);



int i;

    for (i=0; i<3; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", puntero+i); //   SE HACE ASI PARA PASAR LA DIRECCION DE MEMORIA. QUE ES LO QUE SE NECESITA. PARA ESCRIBIR EN ELLA
    }

    for (i=0; i<3; i++) // FOR PARA MOSTRAR
    {
        printf("%d\n", *(puntero+i)); // SE HACE ASI PARA OBTENER LO QUE HAY ESCRITO EN ESA DIRECCION DE MEMORIA. (VALOR ESCRITO)

    }





*/
