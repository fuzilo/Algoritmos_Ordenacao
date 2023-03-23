#include <stdio.h>
#include <stdlib.h>
#define max 6

void selectionsort(int* v)
{
    int i,j, min, aux;
    for (i=0; i<(max-1); i++)
    {
        min=i;
        for(j=(i+1); j<max; j++)
        {
            if (v[j]<v[min])
                min=j;
        }

        if(v[i] != v[min])
            {
            aux=v[i];
            v[i]=v[min];
            v[min]=aux;
            }
    }
}

int main()
{
    int v[max],i;
    for (i=0; i<max; i++)
    {
        printf("Digite um valor: ");
        scanf("%d",&v[i]);
    }

        selectionsort(v);

        for (i=0; i<max; i++)
        {
            printf("%d ,",v[i]);
        }
    }
