/*****************
 * 题目：数组非连续递增（An+1 >= An）
 * 求出连续递增的数组，阶梯
 * [1,1,2,3,4,5,6,7,7,7,7,8,9]
 * [1,2,3,4,5,6,7,8,9,9,9,9,9]
*/

#include <stdio.h>
#include <string.h>

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
    int array[] = {1, 1, 1, 2, 3, 4, 4, 5, 6, 7};
    int len = sizeof(array) / sizeof(array[0]);
    int relay[len];
    memset(relay, 0, sizeof(relay));
    int index = 1;
    relay[0] = array[0];
    for ( int idx = 1; idx < len; idx++ )
    {
        if ( array[idx-1] != array[idx] )
        {
            relay[index] = array[idx];
            index++;
        }
    }

    int ans[index];
    for (int idx = 0; idx < index; idx++ )
    {
        ans[idx] = relay[idx];
    }
    printList(array, len);
    printList(ans, index);

    











    // printf("%ld\n", sizeof(array));
    return 0;
}

#if 1
#endif






