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
 * \brief Genera un n�mero aleatorio
 * \param desde N�mero aleatorio m�nimo
 * \param hasta N�mero aleatorio m�ximo
 * \param iniciar Indica si se trata del primer n�mero solicitado 1 indica que si
 * \return retorna el n�mero aleatorio generado
 *
 */
char getRandomNum(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}
