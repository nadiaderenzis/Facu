int obtenerInt(char mensaje[],char mensajeError[],int minimo, int maximo)
{
    int buffer; // x uso y costumbre, para no ponerle nro o lo q sea
    printf("%s",mensaje);
    scanf("%d",&buffer);

    while(buffer<minimo || buffer>maximo)
    {
    printf(mensajeError);
    scanf("%d",&buffer);
    }
    return buffer;
}
