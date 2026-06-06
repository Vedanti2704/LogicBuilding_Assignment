/*accept amount in US dollar and return its corresponding value in indian currency
consider 1$ as 70 rupees

Input : 10
Output :700

Input : 3
Output :210

Input : 1200
Output : 84000
*/

#include <stdio.h>

int DollarToINR(int iNo)
{
     return iNo * 70;
}


int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("value of INR is %d ",iRet);

    

    return 0;
}