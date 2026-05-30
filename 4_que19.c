/*write a program which accept numbber from user and return summetion of all  factors 

inut : 12
output : 50

inut : 13
output : 37    
*/

#include<stdio.h>

int SumNonFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = SumNonFactor(iValue);
    printf("summetion is %d\n",iRet);

    return 0;
}