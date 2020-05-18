#include <stdio.h>

// Criando uma função recursiva.

void fun(int n){

    if(n > 0){ // Criando uma condição de saída para que não crie um loop infinito.

        printf("%d\n", n);
        fun(n-1);

    }
}


int main(void){

    int num = 5;

    fun(num);


    return 0;
}
