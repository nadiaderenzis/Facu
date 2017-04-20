/******************************************************************
* Programa: Ejemplo Clase 5
*
* Objetivo:
*   Solicitar al usuario 5 números, permitir listarlos por pantalla
*   indicando el máximo, el mínimo y el promedio
*   Permitir Modificar el valor de cualquiera de los números cargados
*   indicando el índice del mismo y su nuevo valor.
*
* Aspectos a destacar:
*   -Utilización de array
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define CANTIDAD 5

int main()
{
    int arrayNumeros[CANTIDAD];
    int numIngresado;
    int max,min;
    int acumulador=0;
    int indice;
    int opcionMenu=0;

    for(indice=0; indice<CANTIDAD; indice++)
    {
        numIngresado=getInt("Ingrese un  numero: ");
        arrayNumeros[indice]=numIngresado;
    }
    system("cls");
    while(opcionMenu!=3)
    {
        opcionMenu=getInt("\n\nSeleccione una opcion: \n1- Mostar \n2- Modificar \n3- Salir\n");
        switch(opcionMenu)
        {
        case 1:
            max=arrayNumeros[0];
            min=arrayNumeros[0];
            printf("\n-INDICE\t-NUMERO\n");
            for(indice=0; indice<CANTIDAD; indice++)
            {
                printf("\n%d\t%d\n",indice,arrayNumeros[indice]);
                if(arrayNumeros[indice]>max)
                {
                    max=arrayNumeros[indice];
                }
                else if(arrayNumeros[indice]<min)
                {
                    min=arrayNumeros[indice];
                }
                acumulador+=arrayNumeros[indice];
            }
            printf("\nEl mayor numero es: %d",max);
            printf("\nEl menor numero es: %d",min);
            printf("\nEl promedio de los nros ingresados es: %d",acumulador/CANTIDAD);
            break;

        case 2:
            indice=getInt("\nIngrese el indice a modificar: ");
            if(indice>=0 && indice<CANTIDAD)
            {
                numIngresado=getInt("\nIngrese un nuevo numero: ");
                arrayNumeros[indice]=numIngresado;
            }
            else
            {
                printf("El indice ingresado, no es valido:");
            }
            break;
        case 3:
            break;

        }

    }

    return 0;
}
