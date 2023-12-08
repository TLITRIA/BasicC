/******************************
 * 数组
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
*/
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100



int main()
{
    
#if 1
/************************
 * 清理脏数据：
 * 方法一：初始化int array[BUFFER_SIZE] = {0};
 * 
 * 方法二：memset(array, 0 ,sizeof(array))
 * 
 * 
*/
# if 1
    int array[BUFFER_SIZE] = { 0 };
#else
    int array[BUFFER_SIZE];
#endif
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\t", idx, array[idx]);
    }
    int len = sizeof(array);
    printf("len:%d\n", len);
    /* 地址 */
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[9]);
    printf("%p\n", array);
    /* 数组的（首）地址 和 数组的首元素的地址是一致的  */
    /* 清理脏数据 */
    memset(array, 0 ,sizeof(array));
    printf("==========================\n");

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\t", idx, array[idx]);
    }



#endif

    


    return 0;
}

#if 1
#endif