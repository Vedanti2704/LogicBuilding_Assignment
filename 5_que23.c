/*write a program to find the factorial of given nunber

Input : 5
Output :120  (5 * 4 * 3 * 2 * 1)

Input : -5
Output :120  (5 * 4 * 3 * 2 * 1)

Input : 4
Output :24  ( 4 * 3 * 2 * 1)
*/

#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        iMult = iMult * iCnt;
    }
    return iMult;

}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("factorial of number is %d",iRet);

    return 0;
}