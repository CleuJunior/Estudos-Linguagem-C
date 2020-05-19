#include <stdio.h>

// Criando a struc Retângulo.

struct Rect{
    int comprimento;
    int largura;
};

// Criando a função Área e fazendo a chamada por valor.

int area(struct Rect recArg){
    return recArg.comprimento * recArg.largura;

}

// Função que faz a chamada por endereço.

void mudaLargura(struct Rect *pRecArg, int larg){
    pRecArg->largura = larg;

}

int main(void){

    struct Rect rect = {20, 12};
    printf("%d\n", area(rect));

    mudaLargura(&rect, 20);

    printf("%d", rect.largura);


    return 0;
}
