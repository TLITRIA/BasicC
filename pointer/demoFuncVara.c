#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10
#define BUFFER_OFFSET 10

/* 函数 */


    /* 函数参数 */
    /* 实现两个数的交换的操作 */

void swapSurfaceData(int val1, int val2)
{
    int tmpdata = val1;
    val1 = val2;
    val2 = tmpdata;

    printf("val1=%d, val2=%d\n", val1, val2);
}

void swapRealData(int *val1, int *val2)
{
    int tmpdata = *val1;
    *val1 = *val2;
    *val2 = tmpdata;

    printf("*val1=%d, *val2=%d\n", *val1, *val2);
}


void printArray(int *array, int)
{
    /*****
     * 数组名就是数组的首地址
     * 数组做函数参数会自动弱化为指针
     * 所以长度要再传一个参数（Q1）
    */
   int elementNum = sizeof(array) ;// sizeof(array[0]);
    printf("len: %d\n", elementNum);

    for (int idx = 0; idx < elementNum; idx++)
    {
        array[idx] = idx + BUFFER_OFFSET;
    }

    for (int idx = 0; idx < elementNum; idx++)
    {
        printf("array[%d] = %d\t", idx, array[idx]);
    }

}


int main()
{
#if 0
    int num1 = 100;
    int num2 = 200;
    

    printf("num1=%d, num2=%d\n", num1, num2);
#if 0
    swapSurfaceData(num1, num2);
#else
    swapRealData(&num1, &num2);
#endif
    printf("num1=%d, num2=%d\n", num1, num2);


    // int a = 5;
    // int *p = &a;
    // *p = 200;
    // printf("a=%d\n", a);
#endif



#if 1
    int array[BUFFER_SIZE];
    memset(array, 0, sizeof(array));
    int elementNum = sizeof(array) / sizeof(array[0]);
    printf("len: %d\n", elementNum);

    for (int idx = 0; idx < elementNum; idx++)
    {
        array[idx] = idx + BUFFER_OFFSET;
    }

    for (int idx = 0; idx < elementNum; idx++)
    {
        printf("array[%d] = %d\t", idx, array[idx]);
    }
    printf("\n");
    
    printArray(array, elementNum);


#endif




    return 0;
}