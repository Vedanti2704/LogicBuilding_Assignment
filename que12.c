//write a program which accepts one number from user and prints that number of even factors ot that number 

#include<stdio.h>


void DisplayFactor(int iNo)
{

    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;  
    }
    for(i = 1; i< iNo ; i++ )
    {
        if((iNo % i) == 0)
        {
           printf("%d\t",i);
        }
    
        
    }

    
}
int main()
{
    int iValue = 0;

    printf("enter number: \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}