#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 32

int main()
{

#if 0
    // 1.指针怎么定义 指针内部存放某变量的地址
    int a = 0;
    long b = 0;
    int *p = 0;


#endif

#if 0
    // 指针怎么使用
    /* 一级 & 二级指针 */
    int a = 5;
    int *p = &a;

    printf("a\t%d\n", a);
    printf("&a\t%p\n", &a);
    /* 非常重要 */
    printf("*(&a)\t%d\n", *(&a));
    printf("*p\t%d\n", *p);
    printf("p\t%p\n", p);
    
    printf("&p\t%p\n", &p);


#if 0
    int *ptr = &p;//报错
    printf("ptr\t%p\n", ptr);
#else
    int **ptr = &p;
    printf("ptr\t%p\n", ptr);
    // printf("*ptr\t%d\n", *ptr);
    printf("*ptr\t%p\n", *ptr);
    
    /* 非常重要 */
    printf("*(*ptr)\t%d\n", **ptr);
    printf("&ptr\t%p\n", &ptr);
    /* *p就是解引用 （读写数据） */
    /* 打印ptr就是 &p */
    /* 打印*ptr就是 &a */
    /* 打印**ptr就是 *(&a) */


    int ***pptr = &ptr;
    printf("==============\n");
    printf("ptr\t%p\n", pptr);


    
#endif



#endif


#if 0
    /* 指针的特性 */
    /****
     * 指针内存
     * 64位8个字节；32位4个字节
    */
    int a = 5;
    int len = sizeof(a);
    printf("len:%d\n", len);

    char p = 97;
    len = sizeof(p);
    printf("len:%d\n", len);

    char *ptr = &p;
    printf("%c\t%d\n", *ptr, *ptr);
    len = sizeof(ptr);
    printf("len:%d\n", len);

    int *ptrInt = &a;
    printf("*(&a)\t%d\n", *(&a));//
    printf("*ptrInt\t%d\n", *ptrInt);//
    len = sizeof(ptrInt);
    printf("len\t%d\n", len);
#endif


#if 0
    /* 指针特性2:指针和字符串 */
    /* 字符串区别于字符数组 */
    char * ptr = "hello world";
    int len = sizeof(ptr);
    printf("len:%d\n", len);

    /* Q1.怎么判断字符串的长度 */
    // strlen()
    int length = strlen(ptr);
    printf("%d\n", length);

    /* Q2.字符串的赋值 */
    char name[BUFFER_SIZE] = { 0 };
    strcpy(name, "zhangsan");
    printf("name:%s\n", name);

    

#endif
    char *ptr2 = NULL;

    strcpy(ptr2, "zhangsan");
    printf("ptr2:%s\n", ptr2);//段错误
    
    /* 堆空间 */
    /* void * 是一个指针，这个指针称为万能指针 */
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr, "shanghai");
    printf("ptr:%s\n", ptr);



    return 0;
}

#if 1
#endif