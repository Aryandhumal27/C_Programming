// 5 4 3 2 1 0 

#include<stdio.h>

void Display(int iNo)
    {
        int iCnt = 0;

        for(int iCnt = iNo; iCnt >= 0; iCnt--)
        {
            printf("%d\t", iCnt);
        }
        printf("\n");
    }

int main()
{
    int iValue = 0;
    
    printf("Please Enter Frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}