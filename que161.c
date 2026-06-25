/* write a program which accept string from user and and accept one character .check whetrher it is present  
in string or not
Input : "Marvellous multi os"   
        e  

Output :  TRUE

*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str ,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}