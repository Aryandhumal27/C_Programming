/*
    5. Write generic program to replace all occurrences of a value. 
*/

#include<iostream>
using namespace std;

template<class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == oldVal)
        {
            arr[iCnt] = newVal;
        }
    }
}

int main()
{
    int iCnt = 0;
    float arr1[] = {87.54f, 23.54f, 87.54f, 123.54f, 4.54f, 87.54f, 33.54f};
    int iSize1 = sizeof(arr1) / sizeof(float);

    int arr2[] = {87, 23, 87, 123, 4, 87, 33};
    int iSize2 = sizeof(arr2) / sizeof(int);

    Replace(arr1, 7, 87.54f, 87.0f);
    Replace(arr2, 7, 87, 86);

    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        cout<<arr1[iCnt]<<"\t";
    }
    cout<<"\n";

    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        cout<<arr2[iCnt]<<"\t";
    }
    cout<<"\n";

    return 0;
}