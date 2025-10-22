// 4. write a program which accepts N from user and print all odd numbers up to N.

// Input :     18
// Output:     1   3   5   7   9   11  13  15

#include<stdio.h>

// Alternate approach
// void OddDisplay(int iNo)
// {
//     int iCnt = 0;

//     if(iNo < 0)
//     {
//         iNo = -iNo;
//     }

//     for(iCnt = 1; iCnt <= iNo; iCnt++)
//     {
//         if((iCnt % 2) != 0)
//         {
//             printf("%d\t", iCnt);
//         }
//     }
// }
//  Time Complexity = O(N)

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {  
         printf("%d\t", iCnt);   
    }
}
//  Time Complexity = O(N/2)

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}