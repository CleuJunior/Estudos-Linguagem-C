#include <stdio.h>

// Passando endere�os como par�metros.

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

    // Chamando a fun��o troca e modificando os valores das vari�veis A e B.

    troca(&a, &b);

    printf("%d %d", a,b);


    return 0;
}
