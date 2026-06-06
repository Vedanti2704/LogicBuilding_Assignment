/*write a program which returns difference between even factorial and  odd factorial of given number

Input : 5
Output : -7 (8 -15)

Input : -5
Output :-7 (8 -15)

Input : 10
Output :2895 (3840 - 945)
*/

#include <stdio.h>


int FactoialDiff(int iNo)
{
    int iCnt = 0;
    int iMultEven = 1;
    int iMultOdd = 1;
    
     if(iNo < 0)
     {
        iNo = -iNo;
     }

     for(iCnt = 2; iCnt <= iNo; iCnt++)
     {
       if(iCnt % 2 == 0)
        {
            iMultEven = iMultEven * iCnt;
        }
     }

     for(iCnt = 2; iCnt <= iNo; iCnt++)
     {
       if(iCnt % 2 != 0)
        {
            iMultOdd = iMultOdd * iCnt;
        }
     }
     return (iMultEven - iMultOdd);
}


int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactoialDiff(iValue);

    printf("difference between even and odd factorial of given number is :  %d ",iRet);


    

    return 0;
}