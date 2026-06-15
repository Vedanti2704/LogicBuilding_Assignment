/*Accept N numbers from user and and accept one number as No and return frequency of NO from it
Input : N : 6
        NO : 66
        Elements : 85 66 3 66 93 88

output : 2
*/
#include<stdio.h>
#include<stdlib.h>



int Frequency(int Arr[], int iLength ,int iNo)
{
    int iCnt = 0;
    int iCount= 0;
    

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]==iNo) )
        {
            iCount++;
        }
     }
     return iCount;
     
    
}     
int main()
{
    int iSize = 0,  iCnt = 0 ,iRet = 0;
    int iValue = 0;
    
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

    iRet =  Frequency(p , iSize ,iValue);

    printf("frequency of number  is %d",iRet);
    
    free(p);

    return 0;
}
