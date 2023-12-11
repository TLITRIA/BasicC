#include <stdio.h>
#include "calculateFunc.h"

/* 函数的定义 */


#if 1
#endif


#if 1
#endif


#if 1
#endif



#if 0
/* 枚举 */
enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL,
};


/* 取别名 */
typedef enum STATUS_CODE STATUS_CODE;  

 /* 以上可以 */


/* 但是这种更专业 */
typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL,
    ON_INVALIDACCESS,
} STATUS_CODE;

#endif




int main()
{

#if 0
    STATUS_CODE status;
    int len = sizeof(status);
    printf("%d\n", len);
#endif


    int num1 = 50;
    int num2 = 60;
    int outc = calculateAdd(num1, num2);
    printf("%d + %d = %d\n", num1, num2, outc);

    outc = calculateSub(num1, num2);
    printf("%d - %d = %d\n", num1, num2, outc);

    outc = calculateMul(num1, num2);
    printf("%d * %d = %d\n", num1, num2, outc);
    
    outc = calculateDiv(num1, num2);
    printf("%d / %d = %d\n", num1, num2, outc);


    return 0;
}


#if 1
#endif
