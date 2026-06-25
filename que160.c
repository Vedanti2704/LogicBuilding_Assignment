/* write a program which accept string from user and count number of whitespaces
Input : marvellous"       
Output :  0

Input : marvellous"       
Output :  "marvellous infosystems"

*/

#include<stdio.h>

int countSpace(char *str)
{
    int iCount = 0;

     while(*str != '\0')
    {
        if(*str == ' ')
        {
           iCount++;
           
        }
        str++;
        
    }
    return iCount;

   
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    

    iRet = countSpace(Arr);

    printf("%d",iRet);

    
    
    return 0;
}