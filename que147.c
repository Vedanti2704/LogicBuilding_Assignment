/* Accept charcter from user if character is small display its correspondind capital
charcyer , and if it is small then display its corresponding capital . 
In other cases display as it as

Input : Q           Input : 4
Output : q          Output : 4

Input : m           Input : %
Output : M          Output : %
*/

#include<stdio.h>

void Display(char ch)
{
     if(ch >= 65 && ch <= 90)
     {
        printf("%c",ch + 32);
     }
     else if(ch >= 97 && ch <= 122)
     {
        printf("%c",ch - 32);
     }
     else
     {
        printf("%c",ch);
     }


}
int main()
{
    char cValue = '\0';

    printf("Enter the character \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}