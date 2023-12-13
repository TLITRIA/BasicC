#include <stdio.h>
#include <string.h>


#define BUFFER_SIZE1   10
#define BUFFER_SIZE2   10
int fstrlen(char str[])
{           //逻辑对吗
    int idx;
    for ( idx = 0; str[idx] != '\0'; idx++ )
    {
        // if (idx > 500000)
        // {
        //     idx = -1;
        //     break;
        // }
    }
    return idx;
}

void fstrcpy(char str1[], char str2[])
{
    for ( int idx = 0; str2[idx] != '\0'; idx++ )
    {
        str1[idx] = str2[idx];//name溢出怎么办
    }
}

int fstrcmp(char str1[], char str2[])
{
    for ( int idx = 0; str1[idx] != '\0' && str2[idx] != '\0'; idx++ )
    {
        if ( str1[idx] < str2[idx] )
        {
            return -1;
        }

        if ( str1[idx] > str2[idx] )
        {
            return 1;
        }
    }
    return 0;
}

void fstrcat(char str1[], char str2[], int index)
{
    int idx = 0;
    for ( idx = 0; str2[idx] != '\0'; idx++ )
    {
        str1[idx+index] = str2[idx];
    }
    str1[idx+index] = '\0';
}


int main()
{

#if 0
    /* 1.strlen */
    char array[BUFFER_SIZE1] = "hellowold";   
    printf("len:%d\n", fstrlen(array)); 
#endif

#if 0
    /* 2.strcpy */
    char array[BUFFER_SIZE1] = "hello world";
    char name[BUFFER_SIZE1];

    fstrcpy(name, array);

    printf("name:%s\n", name);
#endif

#if 0
    /* 3.strcmp */
    char str1[] = "ABCDEF";
    char str2[] = "ABCDEf";
    char str3[] = "ABCDEF";
    char str4[] = "ABCDEG";

    printf("%d\n", fstrcmp(str1, str2));
    printf("%d\n", fstrcmp(str1, str3));
    printf("%d\n", fstrcmp(str1, str4));
    printf("%d\n", fstrcmp(str3, str4));
    

#endif
    
    

#if 0
    /* 4.strcat */
    char str1[BUFFER_SIZE1];
    char str2[BUFFER_SIZE2];
    memset(str1, 0, sizeof(str1));
    memset(str2, 0, sizeof(str2));

    fstrcpy(str1, "Hello");
    fstrcpy(str2, "World");

    // printf("str1:%s\tlen:%ld\n", str1, sizeof(str1)/sizeof(str1[0]));
    // printf("str2:%s\tlen:%ld\n", str2, sizeof(str2)/sizeof(str2[0]));
    // for ( int idx = 0; str1[idx] != '\0'; idx++ )
    // {
    //     printf("-%c-%c \n", str1[idx], str2[idx]);
    // }
    

    fstrcat(str1, str2, 5);

    printf("str1:%s\n", str1);
    
    




    
#endif





    return 0;
}