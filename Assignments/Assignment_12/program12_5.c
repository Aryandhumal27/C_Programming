/*
    5)Check if number is divisible by 5
*/

#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("%s\n", is_divisible_by_five(iValue) ? "Yes" : "No" );

    return 0;
}