#include <stdio.h>
#include <string.h>
#include <stdlib.h>



#define BUFFER_SIZE 10

    /**
     *  内存泄漏 
     * 1.野指针
     * 2.malloc的堆空间没有被释放
     * 3.踩内存（read/write is invalid）
     * 
     * */

int main()
{
    /* 1. 什么情况下会导致内存泄漏 */
    // case 1:  野指针
#if 0
    int a;
    printf("a:%d\n", a);

    int array[BUFFER_SIZE];
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\t", array[idx]);
    }
#endif


#if 0
    char *p;
    printf("\n");
#endif

#if 1   // case 2: strcpy
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);//BUFFER_SIZE = 10，'d', '\0' 占用了其他的地址
    if (!ptr)
    {
        /* 状态码 */
        return -1;
    }
    memset(ptr, 0, sizeof(char) * BUFFER_SIZE);
    
    
    /* 使用malloc分配的空间，数据是脏的。（脏数据） */
#if 0 /* 极度危险，应该用strncpy */
    strcpy(ptr, "hello world");
#else
    /* 使用安全 */
    strncpy(ptr, "hello world", BUFFER_SIZE - 1); // ?
#endif
    printf("ptr:%s\n", ptr);
    
// valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./a.out

    if (ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }
#endif

    return 0;
}

//gtest
//造轮子
#if 1
#endif