#include <stdio.h>

// Fun��o que retornar um inteiro;

int add(int arg1, int arg2){
    return arg1 + arg2;
}



int main(void){

    // Adicionando valores direto a fun��o.

    printf("%d\n", add(3, 5));

    // Adicionando valores atrav�s de vari�veis.

    int a = 13, b = 17;

    printf("%d\n", add(a, b));



    return 0;
}
