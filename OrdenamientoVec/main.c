#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5]={10,2,8,1,5};
    int aux;
    int i;

    for(i=0;i<5;i++)
    {
        if(vec[i]>vec[i+1])
        {
            aux=vec[i+1];
            vec[i]=vec[i+1];
            vec[i]=aux;
        }
    }printf("%d",vec[5]);
    return 0;
}
