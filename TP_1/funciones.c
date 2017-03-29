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

int factorial (int num)
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


