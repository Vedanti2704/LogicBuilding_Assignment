/*Accept N numbers from user and return frequency of 11 from it
Input : N : 6
        Elements : 85 66 3 15 93 88 

output : 0
*/
#include<stdio.h>
#include<stdlib.h>



int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount= 0;
    

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]== 11) )
        {
            iCount++;
        }
     }
     return iCount;
     
    
}     
int main()
{
    int iSize = 0,  iCnt = 0 ,iRet = 0;
   
    
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

    iRet =  Frequency(p , iSize);

    printf("frequency of 11 is %d",iRet);
    
    free(p);

    return 0;
}
