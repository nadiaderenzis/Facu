#include <stdio.h>
#include <stdlib.h>
#define MAX 50

struct
{
    char nombre[50];
    char apellido [50];
    char legajo[8];

} typedef Empleado;
//----------------------------------------------------------
int criterio(char array[])
{
    int flag=0;
    int i=0;

    if(array[i]==array[i+1])
    {
        flag=0;
    }
    if(array[i]<array[i+1])
    {
        flag=1;
    }
    else
    {
        flag=-1;
    }
    return flag;
}
//----------------------------------------------------------
int main()
{
    int molesto;
    Empleado arrayEmp[MAX];
    strcpy(arrayEmp[0].nombre, "AA");
    strcpy(arrayEmp[1].nombre, "BB");
    strcpy(arrayEmp[2].nombre, "CC");

    //molesto=criterio(arrayEmp);
    printf("%d",criterio(arrayEmp));


}
