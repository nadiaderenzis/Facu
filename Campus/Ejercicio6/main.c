#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define MAX 30

int main()
{
    char texto[MAX];
    int longitud;

    printf("Ingrese algo: ");
    scanf("%s",texto);
    longitud=strlen(texto);
    if(longitud>0)
    {
        if(esNumerico(texto)==1)
        {
            printf("El numerico");
        }
        else if(esAlfaNumerico(texto)==1)
        {
            printf("Es alfanumerico");
        }
        else if(esSoloLetras(texto)==1)
        {
            printf("Solo contiene letras");
        }else if(esTelefono(texto)==1)
        {
            printf("Es un numero de telefono");
        }
    }
    return 0;
}
