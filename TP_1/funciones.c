float division (float divisor, float dividendo)
{
    float resultado;
    resultado=(float)divisor/dividendo;
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
float todasLasOperaciones (float n1, float n2)
{
    int resultado=factorial (n1);
    printf("\nEl resultado de la division es: %2.f",division(n1,n2));
    printf("\nEl resultado de la suma es: %2.f",suma (n1,n2));
    printf("\nEl resultado de la multiplicacion es: %2.f",multiplicacion (n1,n2));
    printf("\nEl resultado de la resta: %2.f", resta (n1,n2));
    printf("\nEl factorial del 1er nro es: %d\n",resultado);
}

int factorial (int num)
{
    int resultado;
    {
        if(num==1|| num==0)
        {
            return 1;
        }
        resultado=num* factorial(num-1);
        return (resultado);
    }
}

