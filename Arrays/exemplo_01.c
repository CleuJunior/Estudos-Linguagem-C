#include <stdio.h>


int main(void){

    // Declarando uma array de números inteiros.

    int A[5];

    // Imprimindo o endereço de cada posição da array, com 4 bites de diferença entre cada um.

    for(int index = 0; index < 5; index++){
        printf("%u\n", &A[index]);

    }

    // Declarando outra array de inteiros e atribuindo valores a cada índex.

    int B[5] = {1, 2, 3, 4, 5};

    // Impressão dos valores.

    for(int index = 0; index < 5; index++){
        printf("%u\n", B[index]);

    }


}
