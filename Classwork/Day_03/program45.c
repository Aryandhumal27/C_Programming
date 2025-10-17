#include<stdio.h>

void DisplayFactors()//int iNo
{
//     int iCnt = 0;

//     for(iCnt = 1; iCnt<=(iNo-1); iCnt++)
//     {
//         if((iNo % iCnt) == 0)
//         {
//             printf("%d\t", iCnt);
//         }
//     }
    if((6 % 1 == 0)){
        printf("1\n");
    }
    if((6 % 2 == 0)){
        printf("2\n");
    }
    if((6 % 3 == 0)){
        printf("3\n");
    }
    if((6 % 4 == 0)){
        printf("4\n");
    }
    if((6 % 5 == 0)){
        printf("6\n");
    }
}

int main()
{
    // int iValue = 0;

    // printf("Enter the number : \n");
    // scanf("%d", &iValue);

    DisplayFactors();

    return 0;
}