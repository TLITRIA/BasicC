#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE   32

/* 作业1: 手写字符串strlen strcpy, strcmp, strcat */


int fstrlen(char *array)
{
    return sizeof(array) / sizeof(char);
}

int main()
{
#if 0
    /* 数组的初始化 */
    /* 字符数组 */
    char array[BUFFER_SIZE];
    /* 数组初始化 */
    memset(array, 0, sizeof(array));

    int len = sizeof(array);
    printf("len:%d\n", len);    
#endif

#if 0
    /* 字符数组 */
    char array[BUFFER_SIZE] = "hello world";    
    int len = sizeof(array);
    printf("len:%d, array:%s\n", len, array);
#endif

#if 1
    /* 字符串 (字符数组) */
    char array1[BUFFER_SIZE] = "hello world";    
    /* 第一个 strlen */
    int len = strlen(array1);
    /************
     * IN   字符数组名
     * OUT  数组长
    */
    printf("len:%d\n", len);
    printf("len:%d\n", fstrlen(array1));
    

    /* 第二个 strcpy */
    char name[BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name, "zhangSan");
    printf("name:%s\n", name);

    /* 第三个 strcat */
    strcat(name, " is a boy");
    printf("name:%s\n", name);

    /* 第四个 strcmp */
    char name2[BUFFER_SIZE] = "zhangsan";
    int ret = strcmp(name, name2);
    printf("ret:%d\n", ret);
#endif      


#if 0
    /* 字符串(常量) */
    /* 指针出入 */
    char * ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len:%d\n", len);
    printf("size:%d\n", size);

    printf("*ptr:%c\t*(ptr+1):%c\tptr:%s\n", *ptr, *(ptr+1), ptr); 

    *(ptr + 1) = 'H';
    printf("*ptr:%c\t*(ptr+1):%c\tptr:%s\n", *ptr, *(ptr+1), ptr); 
#endif


    return 0;
}