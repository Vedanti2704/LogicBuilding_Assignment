/* write a program which accept string from user  and return difference between frequency of small characters and capital characters
Input : "MarvellouS"        
Output :  6 (8-2)

*/

#include<stdio.h>


int Difference(char *str)
{
   
   int iSmall = 0;
   int iCapital = 0;
   
   while(*str != '\0')
   {
     if(*str >= 'A' && *str <= 'Z')
     {
       iCapital++;
     }
     if(*str >= 'a' && *str <= 'z')
     {
       iSmall++;
     }

     str++;
     
   }
   return iCapital - iSmall;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);
    
    return 0;
}