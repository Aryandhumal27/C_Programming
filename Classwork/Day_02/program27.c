#include<stdio.h>

//  Dynamic function
void Display(int iFrequncy)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iFrequncy; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iCount = 0;

    printf("Enter the frequency : \n");
    scanf("%d", &iCount);

    Display(iCount);
      
    return 0;                             
}
