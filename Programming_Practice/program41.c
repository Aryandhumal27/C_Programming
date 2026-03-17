// 

#include<stdio.h>

void Display(int iNo)
    {
        int iCnt = 0;

        for(int iCnt = 2; iCnt <= iNo; iCnt+=2)     //Shorthand assignment Operator
        {
            printf("%d\t", iCnt);
        }
        printf("\n");
    }

    // Time Complexity : O(N/2)

int main()
{
    int iValue = 0;
    
    printf("Please Enter Frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}