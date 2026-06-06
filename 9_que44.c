/*write a program which accept number from user and return multiplication of all digits 

Input :2395
Output :270

Input :1018
Output : 0

Input :9440
Output : 144
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits : %d\n", iRet);

    return 0;
}