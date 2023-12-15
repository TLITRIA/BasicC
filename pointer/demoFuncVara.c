#include <stdio.h>
#include <string.h>



/* 函数 */


#if 1
    /* 函数参数 */
    /* 实现两个数的交换 */

void swapData(int val1, int val2)
{
    int tmpdata = val1;
    val1 = val2;
    val2 = tmpdata;

    printf("val1=%d, val2=%d\n", val1, val2);
}




#endif




int main()
{
    int num1 = 100;
    int num2 = 200;
    

    printf("num1=%d, num2=%d\n", num1, num2);
    swapData(num1, num2);
    printf("num1=%d, num2=%d\n", num1, num2);

    return 0;
}