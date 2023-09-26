#include <stdio.h>

double fun(int i){
    volatile double d[1] = {3.14};
    volatile long int a[2];
    a[i] = 1073741824;  /* Possibly out of bounds */
    return d[0];
}

int main()
{
    int i;
    for(i = 0; i <= 4; ++i){
        printf("fun(%d) = %d\n", i, fun(i));
        /*
        fun(0) = 1374389535
        fun(1) = 1374389535
        fun(2) = 1073741824
        fun(3) = 1374389535
        fun(4) -> Segmentation fault
        */
    }
    return 0;
}