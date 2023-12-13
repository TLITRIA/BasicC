/*********************************
 * 作业：
 * 有一个数组，给定一个target
 * 原地排序消除target。
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ARRAY_LENGTH 10
#define ARRAY_RANGE 3
#define TARGET 2


void printList(int array[], int len)
{
    for (int idx = 0; idx < len; idx++)
    {
        printf("%d  ", array[idx]);
    }
    printf("\n=========================\n");
}


int main()
{
    srand(time(NULL));

#if 1
    int nums[ARRAY_LENGTH] = {0};
    for ( int idx = 0; idx < ARRAY_LENGTH; idx++ )
    {
        nums[idx] = rand() % ARRAY_RANGE;
    }
    printList(nums, ARRAY_LENGTH);
    /************************************************/
    int position = 0;
    for (int idx = 0; idx < ARRAY_LENGTH; idx++)
    {
        if (nums[idx] != TARGET)
        {
            nums[position++] = nums[idx];//优化
        }
        
    }
    printList(nums, position);
#endif

#if 0
    int target = 0;
    int length = 0;
    
    printf("输入target大小：");
    scanf("%d", &target);
    
    printf("输入数组大小：");
    scanf("%d", &length);
    int *array = (int*)malloc(length*sizeof(int));
    for (int idx = 0; idx < length; idx++)
    {
        array[idx] = rand() % ARRAY_RANGE;
    }
#endif



    return 0;
}
