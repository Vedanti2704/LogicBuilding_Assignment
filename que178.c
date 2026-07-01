/* Write a program which accept one number from user and toggle 7th  bit  of 
that number if it is on.Return modified number.
Input : 137
Output : 201
*/


#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x40;      

    return (iNo ^ iMask);   
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%u", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number : %u\n", iRet);

    return 0;
}