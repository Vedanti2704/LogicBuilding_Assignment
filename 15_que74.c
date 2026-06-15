/*Accept N numbers from user and and accept range and display all elements from that range
Input : N : 6
        start : 60
        End : 90
        Elements : 85 66 3 66  93 88

output : 66 76 88
*/
#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iLength ,int iStart, int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)               
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    
}     
int main()
{
    int iSize = 0,  iCnt = 0 , iValue1 = 0, iValue2 = 0;
    int *p = NULL;
    

    printf("Enter the number of elements \n");
    scanf("%d",&iSize);

    printf("Enter the starting  number :");
    scanf("%d",&iValue1);

    printf("Enter the endind  number :");
    scanf("%d",&iValue2);

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

    Range(p , iSize ,iValue1,iValue2);

    free(p);

    return 0;
}
