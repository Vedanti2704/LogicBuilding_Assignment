/* write a program which accept string from user and check whether it contains vowels or not
Input : "MarvellouS"        
Output :  TRUE

*/

#include<stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;


BOOL ChkVowel(char *str)
{
  while(*str != '\0')
  {
   if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o'|| *str == 'u')
    {
      return TRUE;
    }
    str++;
     
   }
   
}
int main()
{
    char Arr[20];
    BOOL bRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);
    if(bRet == TRUE)
    {
      printf("contains vowels");
    }
    else
    {
      printf("there is no  vowels");
    }

    
    
    return 0;
}