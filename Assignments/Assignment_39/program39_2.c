/*
    2. Write a recursive program which display below pattern. 

    Output :    1   2   3   4   5
*/

#include<stdio.h>

void Display()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("%d\t", iCnt);
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}