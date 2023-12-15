#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BUFFER_SIZE 5
#define WORDMAX_SIZE 5



int ffstrcmp(char * dst1, char *dst2)
{
    if (*dst1 == '\0' || *dst2 == '\0')
    {
        return -2;
    }
    while ((*dst1 != '\0') && (*dst1 == *dst2))
    {
        dst1++;
        dst2++;
    }
    int t;
    t = *dst1 - *dst2;
    if (t == 0)
    {
        return 0;
    }
    else if (t > 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }    
}

void quickSort(char **array, int start, int end)
{
    
#if 1
    if (start < end)
    {
        char * base;
        // strncpy(base, array[start], sizeof(array[start])/sizeof(char));
        
        base = array[start];
        printf("base:%s\n", base);
        int left = start;
        int right = end;
        while (left < right)
        {
            while (left < right && ffstrcmp(array[right], base) == 1)
            {
                right--;
            }

            if (left < right)
            {
                array[left] = array[right];
                left++;
            }
            while (left < right && ffstrcmp(base, array[left]) )
            {
                left++;
            }
            if ( left < right )
            {
                array[right] = array[left];
                right--;
            }
        }
        array[left] = base;

        printf("list:");
        for (int idx = 0; idx < BUFFER_SIZE; idx++)
        {
            printf("%s  ", array[idx]);
        }
        printf("\n==================================\n");


        quickSort(array, start, left - 1);
        quickSort(array, left + 1, end);
    }
#endif
}


void task()
{
#if 1
    // int array1[BUFFER_SIZE] = {1, 2, 3, 4, 5};
    // for (int idx = 0; idx < BUFFER_SIZE; idx++)
    // {
    //     printf("array1[%d] = %d\n", idx, array1[idx]);
    // }

    // printf("\n");

    // char array2[BUFFER_SIZE] = {'a', 'b', 'c', 'd', 'e'};
    // for (int idx = 0; idx < BUFFER_SIZE; idx++)
    // {
    //     printf("array2[%d] = %c\n", idx, array2[idx]);
    // }

    // printf("\n");

    char * array3[BUFFER_SIZE] = {"never", "gonna", "give", "you", "up"};
    // for (int idx = 0; idx < BUFFER_SIZE; idx++)
    // {
    //     printf("array3[%d] = %s\n", idx, array3[idx]);
    // }
    // printf("%s\n", array3[0]);
    // printf("%d\n", ffstrcmp(array3[0], array3[1]));

    quickSort(array3, 0, BUFFER_SIZE-1);


    // printf("====================\n");
    // for (int idx = 0; idx < BUFFER_SIZE; idx++)
    // {
    //     printf("array3[%d] = %s\n", idx, array3[idx]);
    // }

#endif


#if 0
#endif
}

int main()
{
    task();
    return 0;
}


#if 0
/***
 * 作业1：对array3排序√--->优化
 * 
 * 作业2：合并数组，√----->优化
 * mergeOrderNumbers(int *nums1, int num1Size, int *nums2, int num2Size, int * )
 * 使用malloc
 * 
 * 
 * 作业3：判断回文
 * 传入一串字符，返回判断结果。
 * 忽略空格，大小写一视同仁
 * strncat
 * strncpy
 * strcmp自己实现
 * 
 * ***/






#endif