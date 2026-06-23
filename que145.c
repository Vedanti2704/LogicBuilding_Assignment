/* Accept division of student from user and depends on the division display the exam timing
there are 4 divisions in school as A,B,C,D. exam of division A at 7am,B at 8.30am,C at 9.20am and
D at 10.30am (Application should be case insensetive)
Input : C
Output : your exam time at 9.20 AM

Input : d
Output : your exam time at 10.30 AM
        
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
     if(chDiv == 'A' || chDiv == 'a' )
     {
        printf("your exam time at 7 AM");
     }
     else if(chDiv == 'B' || chDiv == 'b')
     {
        printf("your exam time at 8.30 AM");
     }
     else if(chDiv == 'C' || chDiv == 'c')
     {
        printf("your exam time at 9.20 AM");
     }
     else if(chDiv == 'D' || chDiv == 'd')
     {
        printf("your exam time at 10.30 AM");
     }
     else
     {
        printf("enter correct Division ");       
     }


}
int main()
{
    char cValue = '\0';
    

    printf("Enter your Division  : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    

    return 0;
}