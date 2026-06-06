/*write a program which accept width and height of reactangle from user and 
calculate the area(area = width * height)

Input : 5.3  9.78
Output : 51.834

*/

#include <stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double  dArea = 0.0;

    return ( dArea = fWidth *fHeight);


}
int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : \n");
    scanf("%f",&fValue1);

    printf("Enter height: \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of reactangle is : %lf\n" ,dRet);


    return 0;
}
