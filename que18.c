/*write a program which accept numbber from user and display its all its non  factors 

inut : 12
output : 5 7 8 9 10 11

inut : 13
output :2 3 4 5 6 7 8 9 10 11 12   

inut : 10
output : 3 4 6 7 8 9 
*/

#include<stdio.h>

void DisplayNonFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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