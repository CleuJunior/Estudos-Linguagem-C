#include <stdio.h>


// Definindo uma Struct para criar um Ret�ngulo.

struct Rect{
    int comprimento;
    int largura;
};


int main(void){

    // Declarando e inicializando a Struct Ret�ngulo.

    struct Rect rec;

    // Atribuindo valores a estrutura.

    rec.comprimento = 13;
    rec.largura = 7;

    // Imprimindo os valores.

    printf("%d\n", rec.comprimento);
    printf("%d\n", rec.largura);

    // Criando outra vari�vel do tipo Ret�ngulo e atribuindo valores de outra maneira.

    struct Rect rec2={10, 6};

    printf("%d\n", rec2.comprimento);
    printf("%d", rec2.largura);

    return 0;
}
