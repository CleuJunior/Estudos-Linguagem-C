#include <stdio.h>

// Função que retornar um inteiro;

int add(int arg1, int arg2){
    return arg1 + arg2;
}



int main(void){

    // Adicionando valores direto a função.

    printf("%d\n", add(3, 5));

    // Adicionando valores através de variáveis.

    int a = 13, b = 17;

    printf("%d\n", add(a, b));



    return 0;
}
