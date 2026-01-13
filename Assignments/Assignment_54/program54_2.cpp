/*
    2. Write generic program to find sum of all even elements. 
*/

#include<iostream>
using namespace std;

template<class T>
T SumEven(T *arr, int iSize)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((arr[iCnt] % 2) == 0)
        {
            Sum = Sum + arr[iCnt];
        }
    }

    return Sum;
}

int main()
{
    int iRet = 0;
    int arr1[] = {10, 30, 45, 11, 26, 75, 19};
    int iSize1 = sizeof(arr1) / sizeof(int);

    iRet = SumEven(arr1, iSize1);

    cout<<"Addition of even elements from integer array is : "<<iRet<<"\n";

    return 0;
}