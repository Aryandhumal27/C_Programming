/*
    4. Write generic program to accept N values from user and return largest values. 
*/

#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
    int iCnt = 0;
    T MaxEle = arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > MaxEle)
        {
            MaxEle = arr[iCnt];
        }
    }

    return MaxEle;
}
int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    iRet = Max(arr, 5);
    cout<<"Largest value from integer array : "<<iRet<<"\n";
    
    fRet = Max(brr, 5);
    cout<<"Largest value from float array : "<<fRet<<"\n";

    return 0;
}