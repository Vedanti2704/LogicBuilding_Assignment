/* Write a program which accepts a string from the user
   and reverses that string in place.

Input  : "abcd"
Output : "dcba"

Input  : "abba"
Output : "abba"
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char temp;
    int i = 0, j = 0;

    
    while(str[j] != '\0')
    {
        j++;
    }

    j--;    

    
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter string : ");
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);

    printf("Reversed string : %s\n", Arr);

    return 0;
}