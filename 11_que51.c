/*write a program which accept number from user and display its digits in reverse

Input :  2395
Output : 5 9 3 2

Input : 1018
Output : 8 1 0 1

Input :-1018
Output : 8 1 0 1
*/


#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);

        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}