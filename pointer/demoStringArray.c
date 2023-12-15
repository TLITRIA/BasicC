#include <stdio.h>
#include <string.h>

#define BUFFERSIZE 5
int main()
{
#if 0
    /* 数组: 内存在栈区*/


    char name[BUFFERSIZE] = {0}; 
    memset(name, 0, sizeof(name));
    strncpy(name, "zhangsan", sizeof(name) - 1);
    printf("name:%s\n", name);

    /*  */
    printf("name[0]:%c\n", name[0]);
    name[0] = 'Z';
    printf("name[0]:%c\n", name[0]);

    /*  */
    printf("*(name + 2): %c\n", *(name + 2));
    *(name + 2) = 'A';
    printf("*(name + 2): %c\n", *(name + 2));

    /******
     * 结论：
     * 1.指针数组不分家：name[x] = *(name + x) x 是常量
     * 
     * 
    */
#endif

#if 0
    /* 字符串 ：内存在全局（常量）区*/
    char *ptr = "zhangsan";

    /* 数组和指针不分家 */
    printf("ptr[1]: %c\n", ptr[1]);
    printf("*(ptr + 2): %c\n", *(ptr + 2));


    // *(ptr + 2) = 'A';段错误
    // ptr[0] = 'Z';

    /****
     * 字符串数组与字符串的区别：
     * 1.内存：字符数组的内存存放在内存区，存储值可以修改
     *         字符串内存存放在全局区，存储值不可以被修改
    */
#endif

#if 1
    /* 字符串数组 */
    char *array[BUFFERSIZE] = {0};
    memset(array, 0, sizeof(array));//sizeof(array)???
    array[0] = "never";
    array[1] = "gonna";
    array[2] = "give";
    array[3] = "you";
    array[4] = "up";

    // for (int idx = 0; idx < BUFFERSIZE; idx++)
    // {
    //     printf("array[%d]=%s\n", idx, array[idx]);
    // }
    
    /***
     * 字符串数组
     * 1.他是一个数组
     * 2.存放的是字符串
     * 
     * 
    */
   printf("array[0][0]=%c\n", array[0][0]);
#endif


    return 0;
}