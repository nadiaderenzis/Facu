#include <stdio.h>
#include <stdlib.h>

int IndiceMenor(int array[], int indice)
{
    int i=indice;
    int b=indice;
    int c=indice-1;
   for( ; c>=0 ; c--)
   {
      if(array[indice]<array[c])
      {
        b=c;
        //printf("%d",b);
      }
      else
      {
        break;
      }
   }
   return b;
}

void expandirConjunto (int array[],int cantidad,int indA, int indB)
{ //2,3,1,6,5 cantidad=5  i=2
    int buffer, i=cantidad,b=cantidad-1;
    buffer=array[indA];

    for(i;i>indB;i--)
    {
        array[i]=array[b];
        b--;
    }
    array[indB]=buffer;
}

void contraerConjunto (int array[],int cantidad,int indA)
{
    int i=indA+1,b=indA+2;
    for(;i<cantidad;i++)
    {
        array[i]=array[b];
        b++;
    }
}







