/* Write a program which accept one number from user and on first 4 bits 
.Return modified number.
Input : 73
Output 79
*/


#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x0F;     

    return (iNo | iMask);  
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%u", &iValue);

    iRet = OnBit(iValue);

    printf("Modified number : %u\n", iRet);

    return 0;

}