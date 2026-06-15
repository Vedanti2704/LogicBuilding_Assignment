/*write a program which accept radius of circle from user and calculate its area
cosider value of Pi as 3.14,(Area = Pi * radius * radius)

Input : 5.3
Output : 88.2026

Input : 10.4
Output :339.6224
*/

#include <stdio.h>

double CirclrArea(float fRadius)
{
    const double dPI = 3.14f;

    return ( dPI * fRadius * fRadius);


}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius of circle : \n");
    scanf("%f",&fValue);

    dRet = CirclrArea(fValue);

    printf("Area of circle : %lf\n" ,dRet);


    return 0;
}
