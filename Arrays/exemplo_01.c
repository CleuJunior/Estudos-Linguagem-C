#include <stdio.h>


int main(void){

    // Declarando uma array de n�meros inteiros.

    int A[5];

    // Imprimindo o endere�o de cada posi��o da array, com 4 bites de diferen�a entre cada um.

    for(int index = 0; index < 5; index++){
        printf("%u\n", &A[index]);

    }

    // Declarando outra array de inteiros e atribuindo valores a cada �ndex.

    int B[5] = {1, 2, 3, 4, 5};

    // Impress�o dos valores.

    for(int index = 0; index < 5; index++){
        printf("%u\n", B[index]);

    }


}
