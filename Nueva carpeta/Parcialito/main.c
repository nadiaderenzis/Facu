#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define ATENDIDO 1
#define NOATENDIDO 0

    struct
    {   int dni;
        int turno;
        int estado;
    }typedef Cliente;


int main()
{
    int opcion=0;
    char seguir='s';
    Cliente arrayRegular[25];
    Cliente arrayUrgente[25];
    int i=0;
    int contUrgente=0;
    int contRegular=0;


    do
    {
        opcion=getInt("\nIngrese la opcion deseada: \n1-Tramite urgente \n2-Tramite regular \n3-Proximo cliente \n4-Listar \n5-Informar");

       switch(opcion)
    {

    case 1:
        printf("SELECCIONO TRAMITE URGENTE");
        arrayUrgente[i].dni=getInt("Ingrese el nro de dni: ");
        if(esNumerico(arrayUrgente[i])==0)
        {
            printf("El dato debe ser solo numerico");
            break;
        }
        contUrgente++;

        break;
    case 2:
        printf("SELECCIONO TRAMITE REGULAR");
        arrayRegular[i].dni=getInt("Ingrese el nro de dni: ");
         if(esNumerico(arrayUrgente[i])==0)
        {
            printf("El dato debe ser solo numerico");
            break;
        }
        contRegular++;

        break;
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    }



    }while(seguir=='s')

    return 0;
}
