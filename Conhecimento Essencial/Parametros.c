#include <stdio.h>

// Passando endereços como parâmetros.

void troca(int* numA, int* numB){
    int aux;
    aux = *numA;
    *numA = *numB;
    *numB = aux;
}



int main(void){

    int a, b;

    a = 10;
    b = 20;

    // Chamando a função troca e modificando os valores das variáveis A e B.

    troca(&a, &b);

    printf("%d %d", a,b);


    return 0;
}
