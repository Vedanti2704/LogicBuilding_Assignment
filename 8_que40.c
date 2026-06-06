/*write a program which accept area in square feet and convert it into square meter
(1 square feet = 0.0929 square meter) 

Input : 5
Output :0.464515

Input : 7
Output : 0.650321

*/

#include<stdio.h>

double SqFeetToSqMeter(float fArea)
{
    return fArea * 0.0929;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%f", &fValue);

    dRet = SqFeetToSqMeter(fValue);

    printf("Area in square meter : %lf\n", dRet);

    return 0;
}