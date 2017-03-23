#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    float numero;
    float positivos=0;
    float negativos=0;

    printf("Ingrese un numero\n");
    for(i=0;i<10;i++)
    {
        scanf("%f" ,&numero);
        if(numero>=0)
        {
            positivos++;
        }
        if(numero<0)
        {
            negativos++;
        }
    }
    printf("La cantidad de nros positivos es: %.2f",positivos);
    printf("\nNegativos %.2f",negativos);

    return 0;
}
