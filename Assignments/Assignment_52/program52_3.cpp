/*
    3. Write generic program to accept N values from user and return addition of that values. 
*/
#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + arr[iCnt];
    }

    return Sum;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    int arr1[] = {10, 20, 30, 40, 50};
    float arr2[] = {10.5f, 20.4f, 30.7f, 40.9f, 50.5f};

    iRet = AddN(arr1, 5);
    cout<<"Addition of Integer array is : "<<iRet<<"\n";

    fRet = AddN(arr2, 5);
    cout<<"Addition of float array is : "<<fRet<<"\n";

    return 0;
}