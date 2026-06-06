/*write a program which accept range from user and return addition of all numbers in between that range 
(range should be positive only)

Input : 23 30
Output : 212

Input :10 18
Output : 126

Input :-10  2
Output : invalid range
*/

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart < 0) || (iEnd < 0))
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
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

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is : %d\n",iRet);
    }

    return 0;
}