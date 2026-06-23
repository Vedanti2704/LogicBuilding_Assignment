/* Accept character from user and check whether it is small case or not
Input :  7
Output : TRUE

Input : d
Output : FALSE
        
*/

#include<stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
     if((ch >= 97 && ch <= 122 ))
     {
      return TRUE;
     }
     else
     {
      return FALSE;
     }

}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character  : \n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
      printf("It is small case character ");
    }
    else
    {
      printf("It is not small case character  ");
    }

    return 0;
}