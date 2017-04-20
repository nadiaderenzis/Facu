/**
* /brief Solicita un numero y lo retorna
* /return Retorna el numero ingresado por el usuario
*
*/
float pedirNum()
{
    float num;
    printf("Ingrese un numero: ");
    scanf("%f",&num);
    return num;
}

/**
* /brief Recibe el radio y calcula el area de un circulo
* /param radio correspondiente al radio del circulo
* /return el area del circulo
*
*/

float areaCirculo(float radio)
{
    float area=3.14*radio*radio;
    return area;
}
