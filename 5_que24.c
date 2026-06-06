/* write a program which accept number from user and print its number line
Input : 8
Output : -4 -3 -2 -1 0 1 2 3 4 

*/

#include <stdio.h.>

void Display(int iNo)
{
    
    int iCnt = 0;

    for(iCnt = -iNo; iNo >= iCnt; iCnt++)
    {
        printf("%d\t" ,iCnt);

    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
