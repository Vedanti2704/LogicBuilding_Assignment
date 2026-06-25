/* write a program which accept string from user and and accept one character .return index of the first occurance of  that character 

Input : "Marvellous multi os"   
        m
Output :  0

*/
#include<stdio.h>


int FirstChar(char *str ,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           return iCount;
        }

        iCount++;
        str++;
    }

    return -1;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter character : ");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);

    printf("charcter location is %d ",iRet);

    return 0;
}