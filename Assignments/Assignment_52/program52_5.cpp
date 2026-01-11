/*
    5. Write generic program to accept N values from user and return smallest value. 
*/

#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    int iCnt = 0;
    T MinEle = arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < MinEle)
        {
            MinEle = arr[iCnt];
        }
    }

    return MinEle;
}
int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    iRet = Min(arr, 5);
    cout<<"Minimum value from integer array : "<<iRet<<"\n";
    
    fRet = Min(brr, 4);
    cout<<"Minimum value from float array : "<<fRet<<"\n";

    return 0;
}