/*Accept N numbers from user and display summetion of digits of each number
Input : N : 6
        
        Elements : 8225 665 3 76 953 858

output : 17 17 3 13 17 21
*/

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iNo = 0, iDigit = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d\t", iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    DigitSum(ptr, iSize);

    free(ptr);

    return 0;
}