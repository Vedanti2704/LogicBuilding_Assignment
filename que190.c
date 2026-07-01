/* Write a program which accept one numbers from user and range of positions from user .
toggle all bits from that range


 Input : 897    9   13
 toggle all bits from postion 9 to 13 of input numbers ie 879

*/
#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT Mask = 0;
    int iCnt = 0;

    if((iStart < 1) || (iEnd > 32) || (iStart > iEnd))
    {
        return iNo;
    }

    iCnt = iEnd - iStart + 1;

    Mask = (1 << iCnt) - 1;      // Creates iCnt number of 1's
    Mask = Mask << (iStart - 1); // Shift to required position

    return (iNo ^ Mask);
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPos1 = 0, iPos2 = 0;

    printf("Enter number : ");
    scanf("%u", &iValue);

    printf("Enter starting position : ");
    scanf("%d", &iPos1);

    printf("Enter ending position : ");
    scanf("%d", &iPos2);

    iRet = ToggleBitRange(iValue, iPos1, iPos2);

    printf("Modified number is : %u\n", iRet);

    return 0;
}