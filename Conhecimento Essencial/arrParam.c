#include <stdio.h>

// Uma array passada como parâmetro para uma função, uma array na linguagem C pode ser representada
// como um ponteiro(*) que irar apontar para um ou mais valores inteiros.

void imprimiArr(int* arr, int arrSize){
    for(int index = 0; index < arrSize; index++){
        printf("%d ", arr[index]);
    }

}


// Uma array pode ser  retornada usando um ponteiro, que iria
// apontar para um ou mais valores inteiros nesta função.

int* fun(int arrSize){

    int *pPonteiro = (int*)malloc(arrSize*sizeof(int));
    return pPonteiro;

}


int main(void){

    int arr[3] = {10,20,30};

    imprimiArr(arr, 3);

    int *a;

    a = fun(5);

    return 0;
}
