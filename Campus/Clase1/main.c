#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa que realice las siguientes acciones:

**Solicite al usuario 10 números
**Calcule cuántos son negativos y cuantos son positivos
**Muestre por pantalla la cantidad de negativos y la cantidad de positivos

*/

int main()
{
    int num;
    int i;
    int contPos=0;
    int contNeg=0;

    for(i=0; i<10; i++)
    {
        printf("\nIngrese el numero %d\247 de los 10 numeros: ",i+1);
        scanf("%d",&num);

        if(num>0)
        {
            contPos++;
        }
        else
        {
            contNeg++;
        }

    }
    printf("\nLa cantidad de numeros positivos ingresados es %d y la cantidad de numeros negativos ingresados es %d",contPos,contNeg);
    return 0;
}
