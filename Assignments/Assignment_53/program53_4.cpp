/*
    3. Write generic program to find second smallest element. 
*/

#include<iostream>
using namespace std;

template<class T>
T SecondMin(T *arr, int iSize)
{
    int iCnt = 0;

    T Min = arr[0];
    T SecMin = arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < Min)
        {
            SecMin = Min;
            Min = arr[iCnt];
        }
        else if((arr[iCnt] > Min) && arr[iCnt] < SecMin)
        {
            SecMin = arr[iCnt];
        }
    }

    return SecMin;
}

int main()
{
    float arr1[] = {87.54f, 23.54f, 677.54f, 123.54f, 4.54f, 67.54f, 33.54f};
    int iSize1 = sizeof(arr1) / sizeof(float);

    int arr2[] = {87, 23, 677, 123, 4, 67, 33};
    int iSize2 = sizeof(arr2) / sizeof(int);

    cout<<"Second Maximum from float Array is : "<<SecondMin(arr1, iSize1)<<"\n";
    cout<<"Second Maximum from int Array is : "<<SecondMin(arr2, iSize2)<<"\n";

    return 0;
}