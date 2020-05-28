#include <stdio.h>

int main(void){

    int array2D[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for (size_t i = 0; i < 3; i++)    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("[%d]", array2D[i][j]);
        }
        printf("\n");
    }


    return 0;
}
