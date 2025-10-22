/*
    2. Write a program which accept width & height of rectangle from user and calculate its area. (Area = width * Height)

    Input :     5.3     9.78
    Output :    51.834
*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0;

    dArea = fWidth * fHeight;

    return dArea;
}

// Time Complexity : O(1)

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f", &fValue1);

    printf("Enter height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is : %.4lf", dRet);

    return 0;
}