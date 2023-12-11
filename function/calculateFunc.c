#include <stdio.h>
#include "calculateFunc.h"
/* 源文件(.c)  是函数的实现*/

typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR = -5,
    ON_NULLPTR,
    ON_MALLOCFAIL,
    ON_INVALIDACCESS,
} STATUS_CODE;


/* 加法 */
int calculateAdd(int num1, int num2)
{
    int Sum = num1 + num2;
    return Sum;
}

/* 减法 */
int calculateSub(int num1, int num2)
{
    return num1 - num2;
}

/* 乘法 */
int calculateMul(int num1, int num2)
{
    int amass = num1 * num2;
    return amass;
}

/* 除法 */
int calculateDiv(int num1, int num2)
{
    /* 13/2=6 向下取整 */
    if (num2 == 0)
    {
        return ON_INVALIDACCESS;
    }
    return num1 / num2;
}


