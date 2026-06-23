/* write a program which accept string from user and count the small letters 
Input : "Marvellous Multi OS"        
Output :  4

*/

#include<stdio.h>


int CountSmall(char *str)
{
   int iCnt = 0;
   
   while(*str != '\0')
   {
     if(*str >= 'a' && *str <= 'z')
     {
        iCnt++;
     }
     str++;
   }
   return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("%d",iRet);
    
    return 0;
}