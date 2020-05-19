#include <stdio.h>

int fun(int x){

    static int n = 0;

    if(x > 0){
    n++;
    return fun(x -1) + n;

    }

    return 0;
}


int main(void){

    int num;
    num = fun(5);
    printf("%d\n", num);


    return 0;
}
