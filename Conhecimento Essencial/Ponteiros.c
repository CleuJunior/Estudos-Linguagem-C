#include <stdio.h>
#include <stdlib.h>


int main(void){

    int A = 10;

    // Declarando uma vari�vel do tipo ponteiro para inteiro.

    int *p;

    // Guardando o endere�o de mem�ria da vari�vel A no ponteiro p(*p);

    p = &A;

    // Imprimindo o endere�o das vari�veis.

    printf("Endereco da variavel A: %d\n", &A);
    printf("Endereco ponteiro p que aponta para A: %d\n", p);
    printf("Endereco ponteiro de P: %d\n", &p);

    // Imprimendo o valor atribuido as vari�veis.

    printf("Valor da variavel A: %d\n", A);
    printf("Valor do ponteiro P para A: %d\n", *p);

    // Atribuindo novos valores para vari�vel A atrav�s do ponteiro P.

    *p = 13;

    printf("Agora a variavel A vale: %d\n", A);

    // Criando uma Array de 5 posi��es na Mem�ria Heap.

    int *pPonteiro = (int *)malloc(5*sizeof(int));


    return 0;
}
