/* Write a program which accept one number and position from user and toggle contents of first and last nibble of the number
.Return modified number.(Nibble is a group of four bits)
 

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
    UINT iMask = 0xF000000F;

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%u", &iValue);

    iRet = ToggleNibble(iValue);

    printf("Modified number : %u\n", iRet);

    return 0;
}