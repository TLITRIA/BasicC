#include <stdio.h>
#include <stdlib.h>


#define NUM1_LENGTH 8
#define NUM2_LENGTH 5





int * mergeOrderNums(int *nums1, int num1Size, int *nums2, int num2Size, int * newNumSize)
{
    if (num1Size == 0 || num2Size == 0)
    {
        return NULL;
    }
    int * newNums;
    *newNumSize = num1Size + num2Size;
    newNums = (int *)malloc(*newNumSize * sizeof(int));

    for (int idx = 0; idx < *newNumSize; idx++)
    {
        if (num1Size > 0 && num2Size > 0)
        {
            if (*nums1 <= *nums2)
            {
                *(newNums + idx) = *nums1;
                nums1++;
                num1Size--;
            }
            else
            {
                *(newNums + idx) = *nums2;
                nums2++;
                num2Size--;
            }
        }
        
        else if (num1Size == 0)
        {
            *(newNums + idx) = *nums2;
            nums2++;
            num2Size--;
        }
        else if (num2Size == 0)
        {
            *(newNums + idx) = *nums1;
            nums1++;
            num1Size--;
        }
    }

    return newNums;
}




int main()
{
    int num1[] = {1, 1, 2, 3, 3, 5, 7, 19};
    int num2[] = {2, 7, 9, 12, 17};

    // printf("%d\n", *num1);
    // printf("%d\n", *(num1+1));
    int newSize = 0;
    
    int * newNums = mergeOrderNums(num1, NUM1_LENGTH, num2, NUM2_LENGTH, &newSize);//长度需要在函数中计算

    for (int idx = 0; idx < newSize; idx++)
    {
        printf("newNums[%d] = %d \n", idx, *(newNums + idx));
    }
    printf("\n");
    


    return 0;
}