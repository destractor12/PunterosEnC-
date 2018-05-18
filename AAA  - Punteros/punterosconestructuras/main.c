#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}edato;



int main()
{
    /*edato d;

    d.a=5;
    d.b='<';

    edato* pdato;
    pdato = &d;

    printf("%d---%c\n",*pdato->a,*pdato->b);

    printf("\nTAM: %d\n",sizeof(edato));
    printf("\n%d---%c", d.a, d.b); */

    edato lista[2]={{1,'a'},{1,'b'}};
    int i;

    edato *plista;
    plista=lista;


    for(i=0;i<2;i++)
    {
        printf("%d---%c\n",(*(plista+i)).a,(*(plista+i)).b);
        printf("%d---%c\n",(plista+i)->a,(plista+i)->b);
    }




    return 0;
}
