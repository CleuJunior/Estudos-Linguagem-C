#include <stdio.h>

// Criando uma fun��o recursiva.

void fun(int n){

    if(n > 0){ // Criando uma condi��o de sa�da para que n�o crie um loop infinito.

        printf("%d\n", n);
        fun(n-1);

    }
}


int main(void){

    int num = 5;

    fun(num);


    return 0;
}
