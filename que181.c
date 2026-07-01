/* Write a program which accept one number and position from user and check whether bit at that position is on or off. if bit is one return TRUE othrtwise return FALSE.
.
Input : 10      2
Output TRUE
*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0;

    if((iPos < 1) || (iPos > 32))
    {
        return FALSE;
    }

    iMask = 1 << (iPos - 1);

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
    UINT iPosition = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%u", &iValue);

    printf("Enter position : ");
    scanf("%u", &iPosition);

    bRet = ChkBit(iValue, iPosition);

    if(bRet == TRUE)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}