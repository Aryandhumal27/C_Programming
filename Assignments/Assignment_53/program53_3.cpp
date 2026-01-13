/*
    3. Write generic program to find second largest element. 
*/

#include<iostream>
using namespace std;

template<class T>
T SecondMax(T *arr, int iSize)
{
    int iCnt = 0;

    T Max = arr[0];
    T SecMax = arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > Max)
        {
            SecMax = Max;
            Max = arr[iCnt];
        }
        else if((arr[iCnt] < Max) && arr[iCnt] > SecMax)
        {
            SecMax = arr[iCnt];
        }
    }

    return SecMax;
}

int main()
{
    float arr1[] = {87.54f, 23.54f, 677.54f, 123.54f, 4.54f, 67.54f, 33.54f};
    int iSize1 = sizeof(arr1) / sizeof(float);

    int arr2[] = {87, 23, 677, 123, 4, 67, 33};
    int iSize2 = sizeof(arr2) / sizeof(int);

    cout<<"Second Maximum from float Array is : "<<SecondMax(arr1, iSize1)<<"\n";
    cout<<"Second Maximum from int Array is : "<<SecondMax(arr2, iSize2)<<"\n";

    return 0;
}