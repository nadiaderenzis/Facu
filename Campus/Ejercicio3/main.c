#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

/**
1) Crear una funci�n que permita ingresar un numero al usuario y lo retorne.
2) Crear una funci�n que reciba el radio de un c�rculo y retorne su �rea.
3)Utilizar las funciones de los puntos 1 y 2 para hacer un programa
que calcule el �rea de un c�rculo cuyo radio es ingresado por el usuario. Documentar las funciones al estilo Doxygen.
*/
int main()
{
    float num;
    float area;

    num=pedirNum();
    area=areaCirculo(num);
    printf("\nEl area del circulo es: %.2f\n",area);

    return 0;
}
