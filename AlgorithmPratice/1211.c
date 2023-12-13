#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_LENGTH 20
#define ARRAY_RANGE 1000


#define ENTER printf("\n")

void printList(int array[])
{
    for (int idx = 0; idx < ARRAY_LENGTH; idx++)
    {
        printf("%d  ", array[idx]);
    }
    printf("\n=========================\n");
}

void quickSort(int array[], int start, int end)
{
    if (start < end)
    {
        int base = array[start];
        int left = start;
        int right = end;

        while (left < right)
        {
            /*** 从最右端索引开始向左找，如果array[right] <= base 
             * 则将array[right]‘填入’array[left]。
             * 再从左索引+1开始找，如果array[left] >= base
             * 则将array[left]‘填入’array[right]。
             * 如此循环直到left+1=right
            */

            while ( left < right && array[right] > base )
            {
                right--;
            }
            if ( left < right )
            {
                array[left] = array[right];
                left++;
            }

            while ( left < right && array[left] < base )
            {
                left++;
            }
            if ( left < right )
            {
                array[right] = array[left];
                right--;
            }

        }
        // 出循环时left=right了
        array[left] = base;

        quickSort(array, start, left - 1);
        quickSort(array, left + 1, end);
        

    }
}


int main()
{
    srand(time(NULL));
    int array[ARRAY_LENGTH] = {0};

    for ( int idx = 0; idx < ARRAY_LENGTH; idx++ )
    {
        array[idx] = rand() % ARRAY_RANGE;
    }

    printList(array);



    quickSort(array, 0, ARRAY_LENGTH-1);


    printList(array);

    return 0;
}



/*****************
 * 题目：数组非连续递增（An+1 >= An）
 * 求出连续递增的数组，阶梯
 * [1,1,2,3,4,5,6,7,7,7,7,8,9]
 * [1,2,3,4,5,6,7,8,9]
*/
/***********
 * 
 * 
 * 
 * 
 * 
 * 
 * 
*/