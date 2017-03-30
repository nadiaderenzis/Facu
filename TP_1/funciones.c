float division (float divisor, float dividendo)
{
    float resultado;
    resultado=divisor/dividendo;
    return resultado;
}

float suma (float num1, float num2)
{
    float resultado;
    resultado=num1+num2;
    return resultado;
}

float multiplicacion (float multiplicando, float multiplicador)
{
    float resultado;
    resultado=multiplicando*multiplicador;
    return resultado;
}

float resta (float minuendo, float sustraendo)
{
    float resultado;
    resultado=minuendo-sustraendo;
    return resultado;
}

int factorial (float num)
{
    int n;
    int resultado=1;
    n=(int)num;
    if(n==1)
    {
        return 1;
    }
    resultado=n* factorial(n-1);
    return (resultado);
}
int validacion2num(int flag, int n)
{
    if (flag==0)
    {
        if(n==1)
        {
            printf("\nDebe ingresar el 1er operando para realizar el calculo seleccionado: ");
        }
        else if(n==2)
        {
            printf("\nDebe ingresar el 2er operando para realizar el calculo seleccionado: ");
        }
    }

}

