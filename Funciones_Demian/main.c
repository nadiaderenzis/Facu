#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 9

int main ()
{
    int array[MAX]= {8,2,3,4,1,5,6,7};
    int cantidad=8;
    int i,b,j;
    i=0;

    for(i=0; i<cantidad; i++)
    {
        b=IndiceMenor(array,i);
        expandirConjunto(array,cantidad,i,b);
        contraerConjunto(array,cantidad,i);
    }


    for(i=0; i<cantidad; i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}
