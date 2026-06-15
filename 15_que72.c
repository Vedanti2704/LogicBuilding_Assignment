/*Accept N numbers from user and and accept one number as No and return index of first occurance of that number
Input : N : 6
        NO : 66
        Elements : 85 66 3 86 93 88

output : 1
*/
#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[], int iLength ,int iNo)
{
    int iCnt = 0;
    
    

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]==iNo) )
        {
             return iCnt;
        }
     }
     return -1;
    
     
    
}     
int main()
{
    int iSize = 0,  iCnt = 0 ,iRet = 0, iValue = 0;
    int *p = NULL;
    

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

    iRet = FirstOcc(p , iSize ,iValue);

    if(iRet == -1)
    {
        printf("there is no such Number ");
    }
    else
    {
        printf("first occurance of number is %d ",iRet);
    }
    
    
    free(p);

    return 0;
}
