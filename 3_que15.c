/*Accept one character from user and check whether that charcter is vowel
Input : a        output : A
Input : D        output : d
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOLEAN;

BOOLEAN CheckVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'e') || (cValue == 'i') ||
       (cValue == 'o') || (cValue == 'u') ||
       (cValue == 'A') || (cValue == 'E') ||
       (cValue == 'I') || (cValue == 'O') || (cValue == 'U'))
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
    BOOLEAN bRet = FALSE;

    printf("Enter character : \n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }

    return 0;
}