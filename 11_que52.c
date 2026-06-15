/*write a program which accept range from user and display even numbers in between that range

Input :23 35
Output : 24  26  28  30  32  34 

Input :10  18
Output : 10  12  14  16  18

Input :-10  -2
Output : -10  -8  -6  -4  -2
*/

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
       if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting number : ");
    scanf("%d", &iValue1);

    printf("Enter ending number : ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}