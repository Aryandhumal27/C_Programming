/*
    2. Accept single digit number from user and print it into word

    Input :     9
    Output :    Nine

    Input :     -3
    Output :    Three

    Input :     12
    Output :    Invalid Number

*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo > 9)
    {
        printf("Invalid Number");
        return;
    }
    else if(iNo == 1)
    {
        printf("One");
        return;
    }
    else if(iNo == 2)
    {
        printf("Two");
        return;
    }
    else if(iNo == 3)
    {
        printf("Three");
        return;
    }
    else if(iNo == 4)
    {
        printf("Four");
        return;
    }
    else if(iNo == 5)
    {
        printf("Five");
        return;
    }
    else if(iNo == 6)
    {
        printf("Six");
        return;
    }
    else if(iNo == 7)
    {
        printf("Seven");
        return;
    }
    else if(iNo == 8)
    {
        printf("Eight");
        return;
    }
    else if(iNo == 9)
    {
        printf("Nine");
        return;
    }
}

//  Time Complexity : O(1)

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}