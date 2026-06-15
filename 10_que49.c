/*write a program which accept temperature in fahrenheit and covert it into celsius.
(1 celsius = (fahrenheit -32) * (5/9)) 

Input : 10
Output :-12.2222 (10 - 32 ) * (5/9)

Input : 34
Output : 1.11111 (34 - 32) * (5/9)

*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * (5.0 / 9.0);
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius : %lf\n", dRet);

    return 0;
}
