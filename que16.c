/*write a program which accept numbber from user and display its multiplication of factors

inut : 12
output : 144   (1 * 2 * 3 * 4 * 6)

inut : 13
output : 1    (1)

inut : 10
output : 10     (1 * 2 * 5)
*/

#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultiFact(iValue);

    printf("%d\n", iRet);

    return 0;
}