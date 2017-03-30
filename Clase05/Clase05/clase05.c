float prom(int array[],int cantidad)
{
    int i;
    int suma=0;
    float promedio;

    for(i=0;i<cantidad;i++)
    {
        suma=suma+array[i];
    }
    promedio=(float)suma/cantidad;
    return promedio;
}
