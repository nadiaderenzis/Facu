/******************************************************************
* Programa: Clase 7
*
* Objetivo:
*   Realizar una agenda para guardar los datos de hasta 200 personas
*   de las cuales se toman los siguientes datos:
*       Nombre
*       Apellido
*       legajo (NO SE PUEDE REPETIR)
*
*   a- Realizar un programa con un menú de opciones para hacer altas ,
*      bajas y modificaciones (ABM) de una agenda.
*   b- Mostrar un listado ordenado por Apellido
*
* Aspectos a destacar:
*   Manipulación y chequeo de cadena de caracteres
*   arrays paraleos
*   bajas logicas
*
* Version: 0.1 del 16 de Abril de 2017
* Autor: Nadia
*
* *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define QTY 200

int main()
{
    char arrayNombre [QTY][50];
    char arrayApellido [QTY][50];
    int arrayLegajo [QTY];

    char auxNombre [50];
    char auxApellido [50];
    int auxLegajo [10];
    int auxiliarLegajo;

    int indiceVacio;
    int indiceBusqueda;
    int opcionMenu;

    int i;

    inializarArray(arrayLegajo[],QTY,-1);//Inicializa todos los legajos con -1 para indicar q están vacios
    while(opcionMenu!=6)
    {
        opcionMenu=getInt("Elija la opcion deseada: \n1- ALTA\n2- BAJA\n3- MODIFICACION\n4- LISTAR\n5- ORDENAR\n6- SALIR");
    case 1:
        indiceVacio=primeraOcurrencia(arrayLegajo,QTY,-1);
        if(indiceVacio==-1)
        {
            printf("No hay registros vacios.");
            break;
        }
        print("\nALTA\n");
        if(!getStringLetras("Ingrese el nombre: ",auxNombre)==0)
        {
            printf("El nombre solo debe contener letras");
            break;
        }
        if(!getStringLetras("Ingrese el apellido: ",auxApellido)==0)
        {
            printf("El nombre solo debe contener letras");
            break;
        }
        if(!getStringNumeros("Ingrese legajo: ",auxLegajo)==0);
        {
            printf("El legajo solo debe contener numeros");
            break;
        }
        auxiliarLegajo = atoi(auxLegajo);// pasa a entero el srting de numeros

        if(registroVacio(arrayLegajo,QTY,auxiliarLegajo)!=-1)
        {
            printf("El registro ya existe");
            break;
        }

        strcpy(arrayNombre[indiceVacio],auxNombre);
        strcpy(arrayApellido[indiceVacio],auxApellido);
        arrayLegajo[indiceVacio]=auxiliarLegajo;

    case 2:
        printf("\nBAJA\n");
        if(!getStringNumeros("Ingrese legajo: ",auxLegajo)==0);
        {
            printf("El legajo solo debe contener numeros");
            break;
        }
        indiceBusqueda=primeraOcurrencia(arrayLegajo[],QTY,auxLegajo);
        if(indiceBusqueda==-1)
        {
            printf("El legajo no existe");
            break;
        }
        arrayLegajo[indiceBusqueda]=-1;
        break;

    case 3:
        printf("\nMODIFICACION\n")
        if(!getStringNumeros("Ingrese el numero de legajo que desea modificar,",auxLegajo))
        {
            printf("El legajo solo debe contener numeros");
            break;
        }
        indiceBusqueda=primeraOcurrencia(arrayLegajo[],QTY,auxLegajo);

        if(indiceBusqueda==-1)
        {
            printf("El legajo no existe");
        }

        if(!getStringLetras("Ingrese el nombre: ",auxNombre)==0)
        {
            printf("El nombre solo debe contener letras");
            break;
        }

        if(!getStringLetras("Ingrese el apellido: ",auxApellido)==0)
        {
            printf("El nombre solo debe contener letras");
            break;
        }
        strcpy(arrayNombre[indiceBusqueda],auxNombre);
        strcpy(arrayApellido[indiceBusqueda],auxApellido);
        break;
    case 4:
        printf("\nLISTAR\n")
        for(i=0;i<QTY,i++)
        {
            if(arrayLegajo[i]!=-1)
            {
                printf("\n%s - %s - %d",arrayApellido[i],arrayNombre[i],arrayLegajo[i]);
            }
        }
        break;
    case 5:
        printf("\nORDENAR\n");


        break;
    case 6:
        break;

    }
    return 0;
}
