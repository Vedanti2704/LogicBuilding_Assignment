/* Write a program which accepts a string from the user
   and copy the small characters  of that string into another string . 
Input  : "Marvellous Multi OS"
          
Output : arvellous Multi



*/

#include<stdio.h>

void StrCpyCap(char *src , char *dest )
{
    
    while(*src != '\0')
    {
        if((*src >= 'a')&&(*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
         src++;
       
    }
    *dest = '\0'; 
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; //empty string

    StrCpyCap(arr,brr);

    printf("%s",brr);   //MMOS

   
    return 0;
}