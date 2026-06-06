/*write a program which accept range from user and return addition of all even numbers in between that range 
(range should be positive only)

Input : 23 30
Output : 108

Input :10 18
Output : 70

Input :-10  2
Output : invalid range
*/

#include<stdio.h>

int RangeEvenSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart < 0) || (iEnd < 0))
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting number : \n");
    scanf("%d",&iValue1);

    printf("Enter ending number : \n");
    scanf("%d",&iValue2);

    iRet = RangeEvenSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition of even numbers is : %d\n",iRet);
    }

    return 0;
}