/*Accept N numbers from user and return difference between summetion of even elements and summetion of odd elements

Inpput : N : 6
        Elements : 85 66 3 80 93 88

output : 53 (234 - 181)
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    return(iSumEven - iSumOdd);
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    
    int *p = NULL;

    printf("Enter the number of elements \n");
    scanf("%d",&iSize);

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

    iRet = Difference(p , iSize);

    printf("result is %d\n",iRet);

    free(p);

    return 0;
}
