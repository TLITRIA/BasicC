#include <stdio.h>

/* 常量 */
const int g_num = 10;



int main()
{
    /* 字符数组初始化*/
    char buffer1[] = "helloworld";
    buffer1[0] = 'H';
    printf("buffer1:%s\tbuffer[0]:%c\n", buffer1, buffer1[0]);


    char * ptr = "helloworld";
    printf("ptr[0]:%c\t*(ptr+1):%c\t", *(ptr + 0), *(ptr + 1));
    /* 在C语言数组与指针指向的效果是相同的 */



    /* 字符串是常量，放在全局区域 */
    ptr[0] = 'H';//segmentation fault
    printf("ptr[0]:%c\n", ptr[0]);


    /*******************GDB**********************
     * 
     * gcc demoString.c -o demoString
     * gcc -g demoString.c -o demoString
     * 区别：后一条的可执行文件更大，就因为 -g 生成了可执行文件
     * 
     * kill -l
    */
    return 0;
}