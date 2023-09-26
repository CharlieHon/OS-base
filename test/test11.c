#include <stdio.h>
int main(int argc, char* argv[])
{
    int a = 10;
    double *p = (double*)&a;
    printf("%f\n", *p); // 0.000000
    printf("%f\n", (double(a)));    // 10.000000
    /* 差别在于一条指令：fldl 和 fildl */

    return 0;
}