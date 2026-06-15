/*write a program which accept range from user and display  of all numbers in between that range in reverse order

Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23

Input :10 18
Output : 18 17 16 15 14 13 12 11 10

Input :10  10
Output : 10
*/


#include<stdio.h>

void DisplayRangeReverse(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting number : \n");
    scanf("%d",&iValue1);

    printf("Enter ending number : \n");
    scanf("%d",&iValue2);

    DisplayRangeReverse(iValue1, iValue2);

    return 0;
}