#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utn.h"
/******************************************************************
* Programa: Ejemplo Clase 4
*
* Objetivo:
*   A-  Desarrollar una biblioteca "utn.h" que posea funciones para
*       pedirle al usuario el ingreso de datos
*           - getInt()
*           - getFloat()
*           - getChar()
*
*   B-  Diseñar un programa para jugar a adivinar un número entre 0 y 100.
*       El juego tiene que dar pistas de si el número introducido por el
*       jugador está por encima o por debajo. El juego termina cuando se
*       adivina el número o se decide terminar de jugar ingresando un número
*       negativo. Permitir jugar tantas veces como lo desee el jugador y al
*       salir mostrar su mejor puntuación. Utilizar la biblioteca del punto 1.
*
* Aspectos a destacar:
*   -Se practica la declaración de funciones y se muestra como crear una
*    biblioteca propia y utilizarla en un programa.
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/
int main()
{
    int numRandom;
    int num;
    char seguirJugando='s';
    int flagJugar;

    do
    {
        numRandom=getRandomNum(1,100,1);
        flagJugar=1;
        while(flagJugar==1)
        {
            num=getInt("\nIngrese un  numero entre 0 y 99: ");
            if(num<0)
            {
                flagJugar=0;
            }
            else if(num==numRandom)
            {
                printf("\nGANASTE!!!");
                flagJugar=0;
            }
            else if (num>numRandom)
            {
                printf("\nEl numero es mas chico");
                flagJugar=1;
            }
            else if (num<numRandom)
            {
                printf("El numero es mas grande");
            }
        }

        seguirJugando=getChar("Desea seguir jugando? [s/n]\n");

    }
    while(seguirJugando=='s');

    return 0;
}
