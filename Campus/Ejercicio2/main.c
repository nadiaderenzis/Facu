#include <stdio.h>
#include <stdlib.h>

/**
1) Realizar un programa que solicite cinco números e imprima por pantalla el promedio, el máximo y el mínimo.
**/

int main()
{
    int num;
    int i;
    int acumulador;
    int max, min;

    printf("Ingrese un numero: ");
    scanf("%d",&num);
    max=num;
    min=num;
    acumulador=num;

    for(i=0; i<4; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        acumulador+=num;
        if (num>max)
        {
            max=num;
        }
        else if (num<min)
        {
            min=num;
        }
    }
    printf("\nEl maximo es: %i",max);
    printf("\nEl minimo es: %i",min);
    printf("\n\nEl promedio es: %i",acumulador/5);
    return 0;
}
