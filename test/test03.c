#include <stdio.h>

int main(void)
{
    int x = 65535;
    int y = x*x;
    printf("%d\n", y);  // -131071


    // 对于任何int型变量x和y，(x>y) == (-x<-y)总成立吗？
    // 当 x = -2147483648，y任意（除-2147483648外）时不成立

    return 0;
}