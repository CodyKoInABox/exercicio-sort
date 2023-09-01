#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int length;

    printf("Quantos numeros voce deseja ordenar? ");
    scanf("%d", &length);
    fflush(stdin);

    int *ptr;

    ptr = (int*)malloc(length*sizeof(int));

    for(int i = 0; i < length; i++){
        printf("\nInsira o %d numero: ", i);
        scanf("%d", (ptr+(i*sizeof(int))));
        fflush(stdin);
    }

    int counter = 0;

    while(counter < length){

        for(int j = 0; j < length-1; j++){
    
            if(*(ptr+(j*sizeof(int))) > *(ptr+((j+1)*sizeof(int)))){
                int aux = *(ptr+(j*sizeof(int)));
                *(ptr+(j*sizeof(int))) = *(ptr+((j+1)*sizeof(int)));
                *(ptr+((j+1)*sizeof(int))) = aux;
            }
        }
        counter++;
    }
    
    printf("\nSorted: \n");
    for(int i = 0; i < length; i++){
        printf("%d, ", *(ptr+(i*sizeof(int))));
    }

    return 0;
}
