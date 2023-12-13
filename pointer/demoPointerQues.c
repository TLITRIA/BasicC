#include <stdio.h>
#include <string.h>



int main()
{
    /* 指针和字符串 */
    char *ptr = "hello world"; //全局常量

#if 0
    /* Q1：什么是字符串常量 */
    /* 1. 打印字符串的每一个字符 */
    /* Way 使用for循环 */
    char p = '0';
    for (int idx = 0; idx < strlen(ptr); idx++)
    {
        p = *ptr;
        printf("p:%c, idx:%d\n", p, idx);
        ptr++;
    }
#elif 0
    int len = strlen(ptr);
    printf("len:%d\n", len);
    char p = '0';
    for (int idx = 0; idx < len; idx++)
    {
        p = *(ptr++);
        printf("p:%c, idx:%d\n", p, idx);
    }
#elif 0
    /* 实现方式2 */
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }printf("\n");
#endif
    


    /* Q3：给字符串赋值 bug */
    char *ptr2 = NULL;//null是非法地址
#if 1
    ptr2 = "shanghai";
    printf("&(shanghai): %p\n", &("shanghai"));
    printf("ptr:%p\n", ptr2);
    
#else
    strcpy(ptr2, "shanghai");
#endif
    printf("ptr2:%s\n", ptr2);









    return 0;


}

#if 1
#endif