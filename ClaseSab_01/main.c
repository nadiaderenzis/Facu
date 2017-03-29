#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h> //para usar getch/getche

int main()
{
    int num;
    char rta;
    int contPar=0;
    int contImpar=0;
    int flag=0;
    int acuPar=0;
    int acuImpar=0;
    int contImpar11=0;
    float promedio;
    float porcentajePar;
    float porcentajeImpar;
    int maxNumPar=0;;
    int min;
    int acumTotal=0;
    int difAcu;

    do
    {
        printf("Ingrese un numero mayor 0 y menor 10.000: \n");
        scanf("%d", &num);
        while(num<=0 || num>=10000)
        {
            printf("Valor incorrecto, por favor ingrese un nro mayor que 0 y menor a 10.000\n");
            scanf("%d",&num);
        }
        if(flag==0)
        {
            min=num;
            flag=1;
        }
        if(num<min)
        {
            min=num;
        }
        if(num%2==0)
        {
            if(contPar==0)//(contPar==0 || num>maxNumPar)
            {
                maxNumPar=num;
            }
            if(num>maxNumPar)
            {
                maxNumPar=num;
            }
            contPar++;
            acuPar+=num;
        }
        else
        {
            acuImpar+=num;
            contImpar++;
            if(num>=11)
            {
                contImpar11++;
            }
        }
        acumTotal+=num;
        printf("Desea continuar? s/n: ");
        fflush(stdin);//setbuf(stdin,NULL)
        // para leer un caracter x teclado, no hace falta enter dsp de ingresar opcion (no muestra opcion selec x teclado)
        //no usa scanf - rta=getch()
        // no uso scanf ;rta=getche();devuelve la opcion seleccionada x el usuaruo y muestra la sig sentencia
        rta=tolower(getch()); //o rta=toupper(getche()); pasa a mayuscula o minuscula.
        while(rta!='n' && rta!='s')
        {
            printf("Respuesta Incorrecta. Ingrese s para NO o n para NO\n");
            fflush(stdin);
            rta=tolower(getch());
        }


    }
    while(rta=='s' || rta=='S');
    porcentajePar=contPar*100/(contPar+contImpar);
    porcentajeImpar=contImpar*100/(contPar+contImpar);
    promedio=(float)acuImpar/contImpar;
    if (acuPar>acuImpar)
    {
        difAcu=acuPar-acuImpar;
    }else
    {
        difAcu=acuImpar-acuPar;
    }
    printf("La cantidad de nros pares es: %d\n", contPar);
    printf("El maximo numero par: %d\n", maxNumPar);
    printf("El numero minimo es: %d\n", min);
    printf("El promedio de los nros impares es: %2.f\n",promedio);
    printf("La cantidad de nros impares mayores a 11 es: %d\n", contImpar11);
    printf("El porcentaje de nros pares es: %2.f\n", porcentajePar);
    printf("El porcentaje de nros impares es: %.2f\n", porcentajeImpar);
    printf("La suma total de todos los nros ingresados es: %d\n",acumTotal);
    printf("La diferencia entre pares e impares es igual a: %d\n",difAcu);


return 0;
}
