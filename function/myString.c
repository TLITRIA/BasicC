#include <stdio.h>
#include <string.h>
// #include "myString.h"

#define BUFFER_SIZE1   32
#define BUFFER_SIZE2   32

/***
 * fstrlen
 * fstrcpy
 * fstrcmp
 * fstrcat
*/

#define PRINT_PTR(p)   \
printf("%8s():&%-5s=0x%-6x,  %-5s=0x%-6x, *%-5s=0x%-6x\n", __FUNCTION__, \
        #p, (unsigned int)(long)&(p), #p, (unsigned int)(long)p, #p, (unsigned int)(long)*p)


int fstrlen(const char *pStr)
{           //如果没有'\0'
    int count = 0;
    
    if (!pStr)
    {
        return count;
    }
    
    while (*pStr != '\0')
    {
        count++;
        pStr++;
    }
    return count;
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

int ffstrcmp(char *dst1, char *dst2)
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



void fstrcat(char str1[], char str2[], int index)
{
    int idx = 0;
    for ( idx = 0; str2[idx] != '\0'; idx++ )
    {
        str1[idx+index] = str2[idx];
    }
    str1[idx+index] = '\0';
}




#if 1
int main()
{
#if 0

    /* 1.strlen */
    char array[BUFFER_SIZE1] = "helloworld";   
    printf("len:%d\n", fstrlen(array)); 
#endif

#if 0
    /* 2.strcpy */
    char array[BUFFER_SIZE1] = "hello world";
    char name[BUFFER_SIZE1];

    fstrcpy(name, array);

    printf("name:%s\n", name);
#endif

#if 1
    /* 3.strcmp */
    char str1[] = "abcdef";
    char str2[] = "abcd";
    char str3[] = "abcdefgh";
    char str4[] = "abcdeg";
    char str5[] = "aacdef";
    char str6[] = "axcdef";
    char str7[] = "\0";

    printf("%s\n", str1);
    printf("%c\n", *str1+6);


    printf("%s-%s:%d\n", str1, str2, ffstrcmp(str1, str2));
    printf("%s-%s:%d\n", str1, str3, ffstrcmp(str1, str3));
    printf("%s-%s:%d\n", str1, str4, ffstrcmp(str1, str4));
    printf("%s-%s:%d\n", str1, str5, ffstrcmp(str1, str5));
    printf("%s-%s:%d\n", str1, str6, ffstrcmp(str1, str6));
    printf("%s-%s:%d\n", str1, str7, ffstrcmp(str1, str7));
    

    

    








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
    
#endif
