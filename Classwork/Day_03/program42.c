// 

#include<stdio.h>

void Display(int iNo)
    {
        int iCnt = 0;

        for(int iCnt = 1; iCnt <= iNo; iCnt++)   
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t", iCnt);
            }   
        }
        printf("\n");
    }

    // Time Complexity : O(N)

int main()
{
    int iValue = 0;
    
    printf("Please Enter Frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}