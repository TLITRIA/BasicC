#include <stdio.h>


#define PRINT_INT(i)   \
printf("%8s():&%-5s=0x%-6x,  %-5s=0x%-6x\n", __FUNCTION__, #i, (unsigned int)(long)&(i), #i, i)

#define PRINT_PTR(p)   \
printf("%8s():&%-5s=0x%-6x,  %-5s=0x%-6x, *%-5s=0x%-6x\n", __FUNCTION__, \
        #p, (unsigned int)(long)&(p), #p, (unsigned int)(long)p, #p, (unsigned int)(long)*p)


int main()
{

#if 1
/* 指针变量类型转换 */
//地址也是无符号整型
    unsigned int a = 5, b;

    printf("&a=%x\n&b=%x\n", (unsigned int)(long)&a, (unsigned int)(long)&b);
    b = (unsigned int)(long)&a;
    PRINT_INT(b);


#endif



    return 0;
}

#if 1
#endif