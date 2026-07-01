/* Write a program which checks whether first and ast bit is ON or OFF .
first bit means bit number 1 and lats bit means bit number is 32*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask =  0x80000001;

    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("1st and 32nd bits are ON\n");
    }
    else
    {
        printf("1st and/or 32nd bit is OFF\n");
    }

    return 0;
}