/*
    1. Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14 (Area = PI * Radius * Radius)

    Input :     5.3
    Output:     88.2026 

    Input :     10.4
    Output:     339.6224        
*/

#include<stdio.h>

#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

// Time Complexity : O(1)

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of the circle is : %.4lf", dRet);

    return 0;
}