/*
    1. Write generic program to search a value in an array. 
*/

#include<iostream>
using namespace std;

template<class T>
bool search(T *arr, int iSize, T value)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == value)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    bool bRet = false;
    int arr1[] = {10, 30, 45, 11, 26, 75, 19};
    int iSize1 = sizeof(arr1) / sizeof(int);

    float arr2[] = {10.56f, 30.56f, 45.56f, 11.56f, 26.56f, 75.56f, 19.56f};
    int iSize2 = sizeof(arr2) / sizeof(float);

    bRet = search(arr1, iSize1, 11);

    if(bRet == true)
    {
        cout<<"Element is present in integer array\n";
    }
    else
    {
        cout<<"Element is not present in integer array\n";
    }

    bRet = search(arr2, iSize2, 11.56f);

    if(bRet == true)
    {
        cout<<"Element is present in float array\n";
    }
    else
    {
        cout<<"Element is not present in float array\n";
    }

    return 0;
}