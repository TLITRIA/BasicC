#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 1
int judgeMoslems(char * str1)
{
    int length = 0;
    if (*(str1) == '\0')
        return -1;

    for (length = 0; *(str1 + length) != '\0'; length++){}
    char * tempList = malloc(length * sizeof(char));
    memset(tempList, 0, length);
    int index = 0;

    for (int idx; idx < length; idx++)
    {
        if (*(str1 + idx) >= 'a' && *(str1 + idx) <= 'z')
        {
            *(tempList + index) = *(str1 + idx);
            index++;
        }
        else if (*(str1 + idx) >= 'A' && *(str1 + idx) <= 'Z')
        {
            *(tempList + index) = *(str1 + idx) + 32;
            index++;
        }
    }

    length = index;

    // for (int idx = 0; idx < length; idx++)
    // {
    //     printf("-%c   ", *(tempList + idx));
    // }

    for (int idx = 0; idx * 2 < length; idx++)
    {
        if (*(tempList + idx) != *(tempList + length - idx - 1))
        {
            return 1;
        }
    }
    return 0;
}
#else
int judgeMoslems(char * str1)
{//段错误，因为传入的*str1指向常量
    int length = 0;
    if (*(str1) == '\0')
    {
        return -1;
    }

    int index = 0;
    for (int idx = 0; *(str1 + idx) != '\0'; idx++)
    {
        if (*(str1 + idx) >= 'a' && *(str1 + idx) <= 'z')
        {
            *(str1 + index) = *(str1 + idx);
            index++;
        }
        else if (*(str1 + idx) >= 'A' && *(str1 + idx) <= 'Z')
        {
            *(str1 + index) = *(str1 + idx) + 32;
            index++;
        }
    }

    for (int idx = 0; idx * 2 < length; idx++)
    {
        if (*(str1 + idx) != *(str1 + length - idx - 1))
        {
            return 1;
        }
    }

    return 0;
}
#endif

void judge(char * str)
{
    switch (judgeMoslems(str))
    {
        case 0:
            printf("%s是回文\n", str);
            break;
        case 1:
            printf("%s不是回文\n", str);
            break;
        default :
            printf("ERROR\n");
            break;
    }
}


int main()
{
    char * str1 = "asdfh gfd sa";
    char * str2 = "ASD FG gfd sa";
    
    
    // printf("%s:  ", str2);
    // printf("%s:  ", str2);


    judge(str1);
    judge(str2);


    return 0;
}




