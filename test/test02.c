#include <stdio.h>

int sum(int a[], unsigned len){
    int i, sum = 0;
    for(i = 0; i <= len-1; ++i)
        sum += a[i];
    return sum;
}

int main(void)
{
    int a[4] = {1, 8, 9, 5};
    /*
    当参数len为0时，返回值应该是0，但是在机器上执行时，却发生访存异常。但当len为int型时则正常
    访问违例地址是 0xC0000005
    */
    printf("sum(0) = %d\n", sum(a, 0));
    return 0;
}