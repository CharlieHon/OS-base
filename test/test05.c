#include <stdio.h>

/* 复制数组到堆中，count为数组元素个数 */
int copy_array(int *array, int count){
    /*
    当参数count很大时，则count*sizeof(int)会溢出。
    如count = 2^30 + 1时，count*sizeof(int) = 4
    -> 堆(heap)中大量数据被破坏！
    */
    int i;
    /* 在堆区申请一块内存 */
    int *myarray = (int *)malloc(count * sizeof(int));
    if(myarray == NULL)
        return -1;
    for(i = 0; i < count; ++i)
        myarray[i] = array[i];
    return count;
}

int main(void)
{
    
    return 0;
}