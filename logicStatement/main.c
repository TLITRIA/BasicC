#include <stdio.h>
#include <stdlib.h>
#include <time.h>


enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN,
    QUIT,
};

/* 宏定义 */
/* 代码规范：宏必须使用大写 */
#define COUNT_NUM   10
#define RANGE_NUM   200

int main()
{

#if 0

    int budget = 50000;

    int applephone = 8848;
    int pearphone = 4399;
    int originphone = 6000;
    
    if (budget > applephone)
    {
        printf("get a applephone!\n");
    }
    else if (budget > pearphone)
    {
        /* code */
        printf("get a pearphone!\n");
    }
    else if (budget > originphone)
    {
        printf("get a originphone!\n");
    }
#endif


#if 0
    /* if */
    int budget = 5000;
    int minbudget = 5500;
    int maxbudget = 8000;
    
    int applephone = 8848;
    int pearphone = 4399;
    int originphone = 6000;


    if ( budget < applephone || budget > pearphone )
    {
        printf("I am happy, get a phone.\n");
    }
    else
    {
        printf("I am sad, no phone.\n");

    }

    if ( (minbudget < budget) && (budget < maxbudget) )
    {
        printf("success get a computer.\n");
    }
    else
    {
        printf("error get a computer.\n");
    }
#endif


#if 0
    /* switch */
    int choice = 0;
    /********************************
     * 四处坑：
     * break;要加
     * case下行数过多[100]加大括号，一个函数不要超过80行，否则屎山
     * 
     * 
     * 
     * 
     * 
    */
    printf("请输入你的选项：");
    scanf("%d", &choice);

    switch (choice)
    {
    case REGISTER:
        {
            printf("welcome to register\n");
        }
        break;
    case LOGIN:
        {
            printf("welcome to login\n");
        }
        break;
    case QUIT:
        {
            printf("welcome to quit\n");
        }
        break;
    default:
        printf("INPUT choice INVALID\n");
        break;

    }
#endif


#if 0
    srand(time(NULL));
    
    /* 请你写一个100以内的数 */
    int randomNum = rand()%100 + 1;
    printf("%d\n", randomNum);

    /* 循环 */
    /* for循环*/

    /* 代码规范: 循环不允许使用i */
    /* 代码规范: 不允许使用魔鬼数字，全部用宏*/
    randomNum = 0;
    for (int idx = 0; idx < COUNT_NUM; idx++) //size_t 一个整型
    {
        randomNum = rand() % RANGE_NUM + 1; //int
        printf("randomNum: %d\n", randomNum);
    }
#endif


#if 0
    srand(time(NULL));
    
    /* 编码规范：变量尽量使用驼峰式命名*/
    int circluTimes = COUNT_NUM >> 1;
    int randomNum = 0;

    /* 必须要 */
    while (circluTimes--)//后置是先判断后运算
    {
        randomNum = rand()%RANGE_NUM + 1;
        printf("randomNum: %d\n", randomNum);
    }

/******************************
 * 什么情况下进程的CPU消耗会飙升？
 * man pthread_cond_wait
*/





#endif





    return 0;
}



#if 0
#endif















