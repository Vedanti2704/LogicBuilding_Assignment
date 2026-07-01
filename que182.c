/* Write a program which accept one number and position from user and of that bit. Return modified number.
 
.
Input : 10      2
Output : 8
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0;

    if((iPos < 1) || (iPos > 32))
    {
        return iNo;
    }

    iMask = 1 << (iPos - 1);
    iMask = ~iMask;

    return (iNo & iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iPosition = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%u", &iValue);

    printf("Enter position : ");
    scanf("%u", &iPosition);

    iRet = OffBit(iValue, iPosition);

    printf("Modified number : %u\n", iRet);

    return 0;
}