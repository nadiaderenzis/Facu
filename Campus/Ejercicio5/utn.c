#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* /brief
* /
* /
*
*/

int getInt(char mensaje[])
{
    int num;
    printf("%s",mensaje);
    scanf("%d",&num);
    return num;
}

float getFloat(char mensaje[])
{
    float num;
    printf("%s",mensaje);
    scanf("%f",&num);
    return num;
}

char getChar(char mensaje[])
{
    char letra;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&letra);
    return letra;
}

/**
 * \brief Genera un número aleatorio
 * \param desde Número aleatorio mínimo
 * \param hasta Número aleatorio máximo
 * \param iniciar Indica si se trata del primer número solicitado 1 indica que si
 * \return retorna el número aleatorio generado
 *
 */
char getRandomNum(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}
