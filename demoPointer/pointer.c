#include <stdio.h>

/* C语言程序设计高级教程 */

#define PRINT_INT(i)   \
printf("%8s():&%-5s=0x%-6x,  %-5s=0x%-6x\n", __FUNCTION__, #i, (unsigned int)(long)&(i), #i, i)

#define PRINT_PTR(p)   \
printf("%8s():&%-5s=0x%-6x,  %-5s=0x%-6x, *%-5s=0x%-6x\n", __FUNCTION__, \
        #p, (unsigned int)(long)&(p), #p, (unsigned int)(long)p, #p, (unsigned int)(long)*p)

// warning: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘int *’
    // (unsigned int)(long) 为什么



int main()
{

/* 指针变量的定义与引用 */
#if 0
    int iNum = 0x64;
    // int * ptr = &iNum;
    int *ptr;
    ptr = &iNum;
    
    #if 0
    printf("&iNum = 0x%x\n", (unsigned int)(long)&iNum);
    printf("iNum = 0x%x\n", iNum);
    printf("&ptr = 0x%x\n", (unsigned int)(long)&ptr);
    printf("ptr = 0x%x\n", (unsigned int)(long)ptr);
    printf("*ptr = 0x%x\n", *ptr);
    #else
    PRINT_INT(iNum);
    PRINT_PTR(ptr);
    #endif

    iNum = 0x44;    // 对变量iNum直接访问
    PRINT_INT(iNum);
    PRINT_PTR(ptr);
    *ptr = 0x80;    // 对变量iNum间接访问
    PRINT_INT(iNum);
    PRINT_PTR(ptr);
#endif


#if 0
    int iNum1 = 0x64, iNum2 = 0x80, temp;
    int *ptr, *ptr1 = &iNum1, *ptr2 = &iNum2;
    #if 0
    PRINT_INT(iNum1);
    PRINT_INT(iNum2);
    PRINT_PTR(ptr1);
    PRINT_PTR(ptr2);
    ptr = ptr1; ptr1 = ptr2; ptr2 = ptr;//交换ptr1/ptr2的值，不影响iNum1和iNum2
    printf("===========================================================\n");
    PRINT_INT(iNum1);
    PRINT_INT(iNum2);
    PRINT_PTR(ptr1);
    PRINT_PTR(ptr2);
    #else
    PRINT_INT(iNum1);
    PRINT_INT(iNum2);
    PRINT_PTR(ptr1);
    PRINT_PTR(ptr2);
    temp = *ptr1; *ptr1 = *ptr2; *ptr2 = temp;//交换ptr1/ptr2指向地址的值
    printf("===============================================================\n");
    PRINT_INT(iNum1);
    PRINT_INT(iNum2);
    PRINT_PTR(ptr1);
    PRINT_PTR(ptr2);
    #endif
#endif
/* ========END======== */


/* 指针变量的定义的陷阱 */
/*************************
 * 编码规范-这样做会混淆
 * int* ptr, iNum;
 * int *ptr, iNum;
*/
/* =========END========= */

/* 用typedef定义新类型?? */


#if 1
    // char *ptr_to_char;
    typedef char *ptr_to_char;
    ptr_to_char pch;


#endif






/* =========END========= */





    return 0;
}

#if 1
#endif