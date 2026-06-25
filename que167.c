/* Write a program which accepts a string from the user
   and copy the contents of that string into string . (implement strncpy() function)
Input  : "Marvellous Multi os"
          10
Output : "Marvellous

Note : if third parameter is greater than the size of sourse string then copy 
whole string into destination.

*/

#include<stdio.h>

void StrNCpyX(char *src , char *dest,int iCnt )
{
    
    while((*src != '\0') && (iCnt != 0))
    {
       *dest = *src;
       src++;
       dest++;
       iCnt--;

    }
    *dest = '\0'; 
}

int main()
{
    char arr[30] = "Marvellous Multi os";
    char brr[30]; //empty string

    StrNCpyX(arr,brr,10);

    printf("%s",brr);   //Marvellous multi os

   
    return 0;
}