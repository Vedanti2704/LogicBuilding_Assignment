/* Write a program which accepts a string from the user
   and copy the contents of that string into string . (implement strcpy() function)
Input  : "Marvellous Multi os"
Output : "Marvellous Multi os"  in another string

*/

#include<stdio.h>

void StrCpyX(char *src , char *dest)
{
    
    while(*src != '\0')
    {
       *dest = *src;
       src++;
       dest++;

    }
    *dest = '\0'; 
}

int main()
{
    char arr[30] = "Marvellous Multi os";
    char brr[30]; //empty string


    StrCpyX(arr,brr);

    printf("%s",brr);   //Marvellous multi os

   
    return 0;
}