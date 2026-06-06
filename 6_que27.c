/*write a program wich accept number from user and if a number is less
than 50 then print small ,if it is greater than 50 and less than 100 
then print large
*/

#include <stdio.h>

void Number(int iNo)
{

    if(iNo < 50)
    {
        printf("small");
    }
    else if ((iNo < 100) )
    {
       printf("large"); 
    }
    
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}