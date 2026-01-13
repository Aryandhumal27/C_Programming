/*
    5. Write generic program to find smallest element from an array. 
*/

#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    int iCnt = 0;
    T Min = arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < Min)
        {
            Min = arr[iCnt];
        }
    }

    return Min;
}

int main()
{
    int iRet = 0;
    int arr1[] = {10, 30, 45, 11, 26, 75, 19};
    int iSize1 = sizeof(arr1) / sizeof(int);

    float fRet = 0;
    float arr2[] = {10.56f, 30.56f, 45.56f, 11.56f, 26.56f, 75.56f, 19.56f};
    int iSize2 = sizeof(arr2) / sizeof(float);

    iRet = Min(arr1, iSize1);
    cout<<"Minimun element from integer array : "<<iRet<<"\n";

    fRet = Min(arr2, iSize2);
    cout<<"Minimun element from float array : "<<fRet<<"\n";

    return 0;
}