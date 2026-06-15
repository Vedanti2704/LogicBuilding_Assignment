/*write a program which accept number from user and check wheter it contains oin it or not

Input :  2395
Output : there is no 0

Input : 1018
Output : it contains 0

Input :9000
Output : it contains 0
*/


#include<stdio.h>

#define true 1
#define false 0

typedef int bool;

bool CheckZero(int iNo)
{
    while(iNo != 0)
    {
        if((iNo % 10) == 0)
        {
            return true;
        }

        iNo = iNo / 10;
    }

    return false;
}

int main()
{
    bool bRet = false;

    bRet = CheckZero(1018);

    if(bRet == true)
    {
        printf("It contains 0\n");
    }
    else
    {
        printf("There is no 0\n");
    }

    return 0;
}