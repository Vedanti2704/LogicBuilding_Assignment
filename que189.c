/* Write a program which accept one numbers, two postions from user and
check whether bit at first or bit at a second position is ON or OFF.


 Input : 10  3  7
 output : TRUE

*/
#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT Mask1 = 0;
    UINT Mask2 = 0;
    UINT Mask = 0;

    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        return FALSE;
    }

    Mask1 = 1 << (iPos1 - 1);
    Mask2 = 1 << (iPos2 - 1);

    Mask = Mask1 | Mask2;

    if((iNo & Mask) != 0)
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
    int iPos1 = 0, iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%u", &iValue);

    printf("Enter first position : ");
    scanf("%d", &iPos1);

    printf("Enter second position : ");
    scanf("%d", &iPos2);

    bRet = ChkBit(iValue, iPos1, iPos2);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}