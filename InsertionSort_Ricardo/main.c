#include <stdio.h>
#include <stdlib.h>
#define max 7
void insertionsort (int* v)
{


    int i=0;
    int j=1;
    int aux=0;

    while(j<max)
    {

        aux = v[j];
        i=j-1;

        while((i>=0)&&(v[i])>aux)
        {
            v[i+1]=v[i];
            i=i-1;
        }
        v[i+1]=aux;
        j=j+1;

    }

}


int main()
{

    int v[max],i;


    for (i=0; i<max; i++)
    {
   printf("Digite um numero:");
        scanf("%d",&v[i]);

    }

    //chamar a função criada antes do main

 insertionsort(v);



    for (i=0; i<max; i++)
    {

        printf("%d ,",v[i]);

    }
}
