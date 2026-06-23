/* write a program which accept string from user and display it in reverse order
Input : "MarvellouS"        
Output :  suollevraM

*/

#include<stdio.h>

void Reverse(char *str)
{

    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;
    
    while(start <= str)
    {
        printf("%c\n",*str);
        str--;
    }
   
}
int main()
{
    char Arr[20];
    

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    
    
    return 0;
}