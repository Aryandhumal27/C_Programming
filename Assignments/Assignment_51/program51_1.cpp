/*
    1. Write generic program which accept one value and one number fron user. 
    Print that value that number of times on screen

    Input :         M   7
    Output :        M   M   M   M   M   M   M
    Input :         11  3
    Output :        11  11  11
    Input :         3.7 6
    Ouptput :       3.7 3.7 3.7 3.7 3.7 3.7
*/

#include<iostream>
using namespace std;

template<class T>
void Display(T Value, int iSize)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout<<Value<<"\t";
    }

    printf("\n");
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 7);

    return 0;
}