#include <stdio.h>
double f(int x){
    return 1.0 / x;
}
int main(void)
{
    /* 使用老版本gcc -O2编译时，程序一输出0，程序二输出却是1 */
    // 程序一：无c
    // 程序二：有c
    double a, b, c;
    int i;
    a = f(10);
    b = f(10);
    c = f(10);
    i = a == b;
    printf("%d\n", i);  // 1
    return 0;
}