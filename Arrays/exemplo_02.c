#include <stdio.h>
#include <stdlib.h>

int main(void){

    // Criando uma array na memória stack.

    int A[5] = {4, 1, 8, 9, 0};

    int *p;

    // Criando uma array na memória heap.

    p=(int *)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 7;
    p[2] = 9;
    p[3] = 1;
    p[4] = 11;

    for(int index = 0; index < 5; index++){
        printf("%d ", A[index]);
    }

    printf("\n");

    for(int index = 0; index < 5; index++){
        printf("%d ", p[index]);
    }

    // Liberando espaço alocado na memória.

    free(p);

    return 0;
}
