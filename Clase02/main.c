#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"

int main()
{
    float num1;
    float num2;
    float resultado;
    char operacion;

    printf("Ingrese el 1er numero: ");
    scanf("%f", &num1);
    printf("Ingrese el 2do numero: ");
    scanf("%f", &num2);
    while(num2==0)
    {
        printf("El divisor no puede ser 0, ingrese nuevamente.");
        scanf("%f",&num2);
    }
    resultado=division(num1,num2);
    printf("La division es %.2f",resultado);

    /*switch(operacion)
    {
    case '+':

    }*/
    return 0;
}

//float suma ()
