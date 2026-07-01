/* Write a program which accept one number from user and off 7th abd 10th bit  of 
that number if it is on.Return modified number.
Input : 577
Output : 1
*/


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x240;      
    iMask = ~iMask;

    return (iNo & iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%u", &iValue);

    iRet = OffBit(iValue);

    printf("Modified number : %u\n", iRet);

    return 0;
}