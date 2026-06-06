/*Accept N numbers from user and and accept one number as No and return index of last occurance of that number
Input : N : 6
        NO : 66
        Elements : 85 66 3 66  93 88

output : 3
*/
#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iIndex = -1;

    if(Arr == NULL)
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }
    }

    return iIndex;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number to search : \n");
    scanf("%d",&iValue);

    iRet = LastOcc(ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("Number not found\n");
    }
    else
    {
        printf("Last occurrence index is : %d\n", iRet);
    }

    free(ptr);

    return 0;
}
