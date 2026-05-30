/*write a program which accept numbber from user and display its  factors in decresing order

inut : 12
output : 6 4 3 2 1

inut : 13
output : 1    

inut : 10
output :5 2 1
*/

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}