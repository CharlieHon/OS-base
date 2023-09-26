#include <stdio.h>

int main(void)
{
    int a = 0x80000000;
    int b = a / -1; // objdump反汇编代码，得知除以-1被优化成取负指令neg，故未发生除法溢出
    printf("%d\n", b);  // -2147483648


    int c = -1;     // a/b用除法指定IDIV实现，但它不生成OF标志，那么如何判断溢出异常的呢？
    int d = a / c;  // 实际上是“除法错”异常 #DE(类型0) Linux中，对 #DE 类型发 SIGFPE信号
    printf("%d\n", d);  // "Floating point exception"，CPU检测到了溢出异常


    return 0;
}