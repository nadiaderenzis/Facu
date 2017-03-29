#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float num1;
    float num2;
    float resultado;
    int flagN1=0;
    int flagN2=0;

    do
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese el 1er nro con el que desea operar: ");
            scanf("%f",&num1);
            flagN1=1;
            break;
        case 2:
            printf("Ingrese el 2do nro con el que desea operar: ");
            scanf("%f",&num2);
            flagN2=1;
            break;
        case 3:
            while(flagN1==0 || flagN2==0)
            {
                if(flagN1==0)
                {
                    printf("\nDebe ingresar el 1er operando para realizar el calculo seleccionado: ");
                    scanf("%f",&num1);
                    flagN2=1;
                }
                if(flagN2==0)
                {
                    printf("\nDebe ingresar el 2do operando para realizar el calculo seleccionado: ");
                    scanf("%f",&num2);
                    flagN2=1;
                }
            }
            resultado=suma(num1,num2);
            printf("El resultado de la suma es: %.2f\n",resultado);
            break;
        case 4:
            resultado=resta(num1,num2);
            printf("El resultado de la resta es: %.2f\n",resultado);
            break;
        case 5:
            while(num2==0)
            {
                printf("El divisor no puede ser 0, ingrese nuevamente: ");
                scanf("%f",&num2);
            }
            resultado=division(num1,num2);
            printf("El resultado de la division es: %.2f\n",resultado);
            break;
        case 6:
            resultado=multiplicacion(num1,num2);
            printf("El resultado de la multiplicacion es: %.2f\n",resultado);
            break;
        case 7:
            resultado=factorial(num1);
            printf("El factorial del 1er numero ingresado es: %.0f\n",resultado);
            break;
        case 8:
            resultado=suma(num1,num2);
            printf("El resultado de la suma es: %.2f\n",resultado);
            break;
        case 9:
            seguir = 'n';
            break;
        }

    }
    while(seguir=='s');
    return 0;
}
