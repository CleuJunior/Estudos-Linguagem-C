#include <stdio.h>

// Criando a struc Ret�ngulo.

struct Rect{
    int comprimento;
    int largura;
};

// Criando a fun��o �rea e fazendo a chamada por valor.

int area(struct Rect recArg){
    return recArg.comprimento * recArg.largura;

}

// Fun��o que faz a chamada por endere�o.

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
