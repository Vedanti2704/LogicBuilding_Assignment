/*Accept N numbers from user and and accept one number as No and check whether it is present or not
Input : N : 6
        NO : 66
        Elements : 85 66 3 66 93 88

output : TRUE
*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength ,int iNo)
{
    int iCnt = 0;
    int iCount= 0;
    

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]==iNo) )
        {
            return TRUE;
        }
     }
     return FALSE;
     
    
}     
int main()
{
    int iSize = 0,  iCnt = 0 ,iRet = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter the number of elements \n");
    scanf("%d",&iSize);

    printf("Enter one number :");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate the memory\n");
        return -1;
    }

    
    printf("Enter %d elements ",iSize);

    for(iCnt = 0;iCnt < iSize; iCnt++ )
    {
        printf("enter elements  %d\n" ,iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet =  Check(p , iSize ,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("number is not present");
    }
    
    
    free(p);

    return 0;
}
