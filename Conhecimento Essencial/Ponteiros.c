#include <stdio.h>
#include <stdlib.h>


int main(void){

    int A = 10;

    // Declarando uma variável do tipo ponteiro para inteiro.

    int *p;

    // Guardando o endereço de memória da variável A no ponteiro p(*p);

    p = &A;

    // Imprimindo o endereço das variáveis.

    printf("Endereco da variavel A: %d\n", &A);
    printf("Endereco ponteiro p que aponta para A: %d\n", p);
    printf("Endereco ponteiro de P: %d\n", &p);

    // Imprimendo o valor atribuido as variáveis.

    printf("Valor da variavel A: %d\n", A);
    printf("Valor do ponteiro P para A: %d\n", *p);

    // Atribuindo novos valores para variável A através do ponteiro P.

    *p = 13;

    printf("Agora a variavel A vale: %d\n", A);

    // Criando uma Array de 5 posições na Memória Heap.

    int *pPonteiro = (int *)malloc(5*sizeof(int));


    return 0;
}
