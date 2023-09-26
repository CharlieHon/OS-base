#include <stdio.h>

void copyij(int src[2048][2048], int dst[2048][2048]){
    int i, j;
    for(i=0; i<2048; ++i)
        for(j=0; j<2048; ++j)
            dst[i][j] = src[i][j];
}

void copyji(int src[2048][2048], int dst[2048][2048]){
    int i, j;
    for(j=0; j<2048; ++j)
        for(i=0; i<2048; ++i)
            dst[i][j] = src[i][j];
}

int main()
{
    /*
    以上两个函数功能完全一样，算法完全一样，但是时间复杂不一样
    copyji 21 times slower
    */

    return 0;
}