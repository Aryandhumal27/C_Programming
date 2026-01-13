/*
    2. Write generic program to check whether array is sorted
*/

#include<iostream>
using namespace std;

template<class T>
bool CheckSorted(T *arr, int iSize)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if(arr[iCnt] > arr[iCnt + 1])
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int iSize1 = sizeof(arr1) / sizeof(int);

    float arr2[] = {10.87f, 20.65f, 30.56f, 10.56f, 10.3f};
    int iSize2 = sizeof(arr2) / sizeof(float);

    if(CheckSorted(arr1, iSize1) == true)
    {
        cout<<"Int Array is Sorted\n";
    }
    else
    {
        cout<<"Int Array is not Sorted\n";
    }

    if(CheckSorted(arr2, iSize2) == true)
    {
        cout<<"float Array is Sorted\n";
    }
    else
    {
        cout<<"float Array is not Sorted\n";
    }
    
    return 0;
}