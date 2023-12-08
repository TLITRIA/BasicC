#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{

#if 0
    /* 变量命名：字母数字下划线。只能以字母下划线开头 */
    /* 数据类型对应内存的存储空间 */
    int age = 6;
    int len = sizeof(age);        /* 整形%d就是整数 */
    printf("len: %d, age = %d\n", len, age); 


    /* 浮点数 */
    float weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight = %f\n", len, weight); /* 浮点形%f就是小数 */

    double weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight = %f\n", len, weight); /* 浮点形%f就是小数 */



    long bigValue = 0;
    len = sizeof(bigValue);
    printf("len: %d, bigValue = %ld\n", len, bigValue);/* %ld长整型 */

    short smallValue = 0;
    len = sizeof(smallValue);
    printf("len: %d, smallValue = %d\n", len, smallValue);/* %短整型 */
#endif

#if 0
/* 无符号与有符号的区别 */
/*
'0' - 48
'a' - 97
'A' - 65
'a' - 'A' = 97 - 65 = 32
 */

    char sex = -1; //输出-1
    int len = sizeof(sex);
    printf("len: %d, sex = %d sex = %c\n", len, sex, sex);/* 字符型%c就是字符 */

    char defaultValue = 137; //输出-119
    len = sizeof(defaultValue);
    printf("len: %d, sex = %d sex = %c\n", len, defaultValue, defaultValue);


    unsigned char m_value = -1;//输出255
    len = sizeof(m_value);
    printf("len: %d, m_value = %d m_value = %c\n", len, m_value,  m_value);

    int b = -129;
    char val = b;
    len = sizeof(val);
    printf("len: %d, val = %d\n", len, val);
#endif
    
#if 0
    int val = 2 + 3 * 5;

    /* 括号的优先级高 */
    /* 后置++ */
    val++;
    printf("val:%d\n", val);
    val--;
    printf("val:%d\n", val);
    
    /* 前置 */
    ++val;
    printf("val:%d\n", val);
    --val;
    printf("val:%d\n", val);
    
    val = val + 100;
    printf("val:%d\n", val);

    val += 100;
    printf("val:%d\n", val);
    
    val -= 10;
    printf("val:%d\n", val);

    val *= 100;
    printf("val:%d\n", val);

    val /= 10;
    printf("val:%d\n", val);
#endif

#if 0
    int m_val = 10;
    int discuss = m_val / 3;
    int remainder = m_val % 3;

    printf("discuss:%d\n", discuss);
    printf("remainder:%d\n", remainder);

    /* 随机*/
    int randomVal = rand();
    printf("randomVal:%d\n", randomVal);

    int lotteryRate = randomVal % 4;
    printf("lotteryRate:%d\n", lotteryRate);
#endif

#if 0
    /* 位移 */
    int val = 51;
    // 51 = 32 + 16 + 2 + 1
    // 2^5 + 2^4 + 2^1 + 2^0 00110011
    // 51 << 1


    /* 或 与 */
    int orVal = val | 2;    //00110011 | 00000010
    int andVal = val & 2;   //00110011 & 00000010
    
    printf("val:%d\n", val);
    printf("orVal:%d\n", orVal);
    printf("andVal:%d\n", andVal);

    /* 非 */
    int notVal = !val;
    printf("notVal:%d\n", notVal);



#endif

#if 0
    /* 且&& 或|| 非! */
    int condition1 = 3;
    int condition2 = 5;
    
    /* 或：只要有一个条件满足，就返回1*/
    if( (condition1 == 3) || (condition2 == 5) )
    {
        printf("hello\n");
    }

    /* 且：只有满足两个条件才能返回1*/
#endif


// 作业
    char val1 = -1;
    int len = sizeof(val1);
    printf("len:%d, val1-c = %c, val1-d = %d\n", len, val1, val1);
    
    char val2 = 137;
    len = sizeof(val2);
    printf("len:%d, val2-c = %c, val2-d = %d\n", len, val2, val2);
    
    unsigned char val3 = -1;
    len = sizeof(val3);
    printf("len:%d, val3-c = %c, val3-d = %d\n", len, val3, val3);
    
    int b = -129;
    char val = b;
    len = sizeof(val);
    printf("len:%d, val-c = %c, val-d = %d\n", len, val, val);

    b = 5;
    b = 3^3;
    printf("%d\n",b);















    return 0;
}



