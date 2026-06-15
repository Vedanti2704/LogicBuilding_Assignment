/*Accept one charater from user and convert case of that 

Input : a        output : A
Input : D        output : d
*/



#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c",cValue - 32);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c",cValue + 32);
    }
    else
    {
        printf("Invalid character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}