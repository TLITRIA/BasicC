#include <stdio.h>

#define BUFFER_SIZE 10


int main()
{ 
#if 0
    /* 获取数组长度 ：总长度/元素长度 */
    char array[BUFFER_SIZE] = { 0 };

    int arrayLen = sizeof(array);
    printf("arrayLen:%d\n", arrayLen);

    int elementLen = sizeof(array[0]);
    printf("elementLen:%d\n", elementLen);

    int length = arrayLen / elementLen;
    printf("length:%d\n", length);
#endif
    

#if 0
    /* 字符数组 */
    /* Q1：什么是字符 */
    char pNum = 'a';
    printf("%c\n", pNum);


    /* 指针变量的变量定义必须以p开头*/
    char * ptr = "hello world"; 
    printf("ptr:%s\n", ptr);

    /* 字符数组 */
    char buffer[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    int buflen = sizeof(buffer);
    printf("buflen:%d, buffer:%s\n", buflen, buffer);


#endif

#if 1
    /*************字符数组两种初始化**************
     * buffer1[] = "helloworld"; 有一个'\0'，而另一个不会自动加
     * buffer2[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    *********************************************/
    char buffer1[] = "helloworld";
    char buffer2[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    char buffer3[] = {'h', 'e', 'l'};

    int buflen1 = sizeof(buffer1);//11
    int buflen2 = sizeof(buffer2);//10
    int buflen3 = sizeof(buffer3);//10
    
    printf("buflen1: %d\n", buflen1);
    printf("&buffer1: %p\n", &buffer1);
    printf("buflen2: %d\n", buflen2);
    printf("&buffer2: %p\n", &buffer2);
    printf("buflen3: %d\n", buflen3);
    printf("&buffer3: %p\n", &buffer3);
    
    


#endif

    return 0;
}

#if 1

#endif