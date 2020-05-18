#include <stdio.h>

// Criando uma função recursiva.

void fun(int n){

    if(n > 0){ // Criando uma condição de saída para que não crie um loop infinito.

        fun(n-1);
        printf("%d\n", n);

    }
}


int main(void){

    int num = 5;

    fun(num);


    return 0;
}
