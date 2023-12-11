/*****************************************
 * 用途
 * 
 * 找出数组里和为target的数
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
*/
#include <stdio.h>

#define SIZE_INT 4

int main()
{
    int numList[] = {1, 2, 3, 4, 5, 6, 7};
    int target = 8;


    int numLen = sizeof(numList)/SIZE_INT;
    for ( int idx = 0; idx < numLen; idx++ )
    {
        for ( int jdx = idx+1; jdx < numLen; jdx++ )
        {
            if ( numList[idx] + numList[jdx] == target )
            {
                printf("numList[%d]=%d\tnumList[%d]=%d\n", idx, numList[idx], jdx, numList[jdx]);
                
            }
        }
    }


    // printf("%d\n", dx/SIZE_INT);
    return 0;
}

