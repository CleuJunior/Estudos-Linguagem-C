#include <stdio.h>

// Criando uma fun��o recursiva.

void fun(int n){

    if(n > 0){ // Criando uma condi��o de sa�da para que n�o crie um loop infinito.

        fun(n-1);
        printf("%d\n", n);

    }
}


int main(void){

    int num = 5;

    fun(num);


    return 0;
}
