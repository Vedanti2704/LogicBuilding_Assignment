/* write a program which accept string from user and and accept one character .return index of the last occurance of  that character 

Input : "Marvellous multi os"   
        m
Output :  11

*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iLastIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           iLastIndex = iCnt;
        }

        iCnt++;
        str++;
    }

    return iLastIndex;
}

int main()
{
    char Arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s", Arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    iRet = LastOcc(Arr, cValue);

    printf("charcter location is %d ",iRet);
    
    return 0;
}