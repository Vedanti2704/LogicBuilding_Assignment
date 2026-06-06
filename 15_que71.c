/*Accept N numbers from user and and return the largest number
Input : N : 6
        
        Elements : 85 66 3 66  93 88

output : 93
*/
/* Accept N numbers from user and return the largest number

Input : N : 6
         Elements : 85 66 3 66 93 88

Output : 93
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Maximum(ptr, iSize);

    printf("Largest number is : %d\n", iRet);

    free(ptr);

    return 0;
}