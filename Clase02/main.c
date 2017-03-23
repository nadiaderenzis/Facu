#include <stdio.h>
#include <stdlib.h>
#include "my_maths.h"

int main()
{
    float num1;
    float num2;
    float resultado;
    char operacion;

    printf("Ingrese el 1er numero: ");
    scanf("%f", &num1);
    printf("Ingrese el 2do numero: ");
    scanf("%f", &num2);
    printf("Elija una de las siguientes operaciones: \n + Suma\n - Resta\n / Division\n * Multiplicacion\n ! Factorial: ");
    scanf(" %c", &operacion);
    switch(operacion)
    {
    case '+':
    {
        printf("La operacion elegida es SUMA.\n");
        resultado=suma(num1,num2);
        printf("El resultado de la suma es: %.2f\n",resultado);
        break;
    }
    case '-':
    {
        printf("La operacion elegida es RESTA.\n");
        resultado=resta(num1,num2);
        printf("El resultado de la resta es: %.2f\n",resultado);
        break;
    }
    case '/':
    {
        printf("La operacion elegida es DIVISION.\n");
        while(num2==0)
        {
            printf("El divisor no puede ser 0, ingrese nuevamente: ");
            scanf("%f",&num2);
        }
        resultado=division(num1,num2);
        printf("La division es %.2f\n",resultado);
        break;
    }
    case '*':
    {
        printf("La operacion elegida es MULTIPLICACION.\n");
        resultado=multiplicacion(num1,num2);
        printf("El resultado de la multiplicacion es: %.2f\n",resultado);
        break;
    }
    case '!':
    {
        printf("La operacion elegida es FACTORIAL.\n");

    }
    }
    return 0;
}

