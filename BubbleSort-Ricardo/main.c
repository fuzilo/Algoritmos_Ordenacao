
#include <stdio.h>
#include <stdlib.h>

#define max 7

int main()
{

    int fim,n=max,aux;
    int v[max],i;


    printf("Insira 7 numeros inteiros\n");

    for (i=0;i<max;i++){
        scanf("%d", &v[i]);

    }

for (fim=n-1; fim>0; --fim){

	for (i=0; i<fim ; ++i){
			if (v[i]>v[i+1]){
						aux=v[i];
						v[i]=v[i+1];
						v[i+1]=aux;

	}
	}
}
for (i=0;i<max;i++){

    printf("%d ,",v[i]);
}

}


