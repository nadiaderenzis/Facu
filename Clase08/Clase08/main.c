#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 50
#define DNI 10
//agregar validacion con coma,
// entero positivos, negativos, flotante (validacion de edad), rango
// validacion de edad
// APELLIDO - caracteres especiales
//cuit
// validacion de nombre,no tenga nros, espacios
// validacion de mail
//funcion q obtenga dato de tipo entero (sting y dsp ver de q se trata)

struct //buena practica q sea en mayuscula
{
    int legajo;
    char nombre[50];
    char apellido[50];
    char isEmpty;//c/vez q doy de baja un empleado modif el isEmpty y me ahorro el comprimir y demás
}typedef Empleado; //para ya no llamarlo struct empleado

int isnumber(char* aux)
{
    int i=0;
    int flag=0;
    if(aux[i]=='-')
    {
        i++;//incremento la i, paso al siguiente si encuentro un guion medio
    }
    while(aux[i]!='\0')
    {
        if(isnumber(aux[i])==0)
        {
            flag=0;
            break; //para q no se ejecuten las otras lineas
        }
        flag=1;
        i++;
    }
    return flag;
}
int main()
{
    char buffer[4000];
    Empleado arrayEmpleados[MAX];
    Empleado aux;
    int i;

    for(i=0;i<3;i++)
    {
        printf("Ingrese el nombre: ");
        scanf("%s",buffer);
        if(strlen(buffer)<50)
        {
            strcpy((arrayEmpleado[i].nombre[i],buffer));
        }

        printf("Ingrese el legajo: ");
        scanf("%s",buffer);
        if(isnumber(buffer))
        {
            arrayEmpleado[i].legajo=atoi(buffer);
        }
        printf("Ingrese el apellido: ");
        scanf("%s",buffer);
        if(strlen(buffer)<50)
        {
            strcpy((arrayEmpleado[i].apellido[i],buffer));
        }


    }
    for(i=0;i<3;i++)
    {
        printf("%c\t%c\t%ld",nombre[MAX],apellido[MAX],dni[DNI]);
    }

    return 0;
}
