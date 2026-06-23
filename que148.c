/* Accept charcter from user if it is capital then display all character from iput character till Z
if input character is small then print all charcters in reverse order tii a
In ither cases return directly

Input : Q           
Output :  Q R S T U V W X Y Z         

Input : m       
Output : m l k j i h g f e d c b a    

Input : 8
output : 
*/

#include<stdio.h>

void Display(char ch)
{
     int i = 0;
     if(ch >= 'A' && ch <= 'Z')
     {
       for(i = ch; i <= 'Z'; i++) 
       {
         printf("%c\t",i);
       }
     }
     else if(ch >= 'a' && ch <= 'z')
     {
        for(i = ch; i >= 'a' ; i--) 
       {
         printf("%c\t",i);
       }
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