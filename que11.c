//write a program which accepts one number from user and prints rthat number of even numbers on screen

#include<stdio.h>


void PrintEven(int iNo)
{

    int iCnt = 0;

    if(iNo <= 0)
    {
        return ;   
    }
    for(iCnt = 2; iCnt<= (iNo * 2); iCnt= iCnt+2 )
    {
        printf("%d\t",iCnt);
    }

    
}



int main()
{
    int iValue = 0;

    printf("enter number: \n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}