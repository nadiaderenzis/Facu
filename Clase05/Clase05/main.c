#include <stdio.h>
#include <stdlib.h>
#include "clase05.h"
#define QTY 100

int main()
{
    int i=0;
    int edad[QTY];
    //int buffer; //antes de validar
    char rta;
    float promedio;

    do
    {
        printf("Ingrese la edad: ");
        scanf("%d",&edad[i]);
        printf("Desea continuar? s/n: ");
        fflush(stdin);//
        scanf("%c",&rta);
        i++;

    }
    while(rta=='s');
    //system("cls); limpia pantalla
    promedio=prom(edad,i);
    printf("El promedio de edad ingresado es: %2.f",promedio);

    return 0;
}
