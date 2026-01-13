/*
    4. Write generic program to reverse an array. 
*/

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    int iStart = 0;
    int iEnd = 0;
    T temp = 0;

    for(iStart = 0, iEnd = (iSize - 1); iStart < iEnd; iStart++, iEnd--)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;
    }
}

int main()
{
    int iCnt = 0;
    int arr1[] = {10, 30, 45, 11, 26, 75, 19};
    int iSize1 = sizeof(arr1) / sizeof(int);

    float arr2[] = {10.56f, 30.56f, 45.56f, 11.56f, 26.56f, 75.56f, 19.56f};
    int iSize2 = sizeof(arr2) / sizeof(float);

    cout<<"Original array of integer is : \n";

    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        cout<<arr1[iCnt]<<"\t";
    }
    cout<<"\n";

    Reverse(arr1, iSize1);

    cout<<"Reverse array of integer is : \n";

    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        cout<<arr1[iCnt]<<"\t";
    }
    cout<<"\n";

    cout<<"Original array of float is : \n";

    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        cout<<arr2[iCnt]<<"\t";
    }
    cout<<"\n";

    Reverse(arr2, iSize2);

    cout<<"Reverse array of float is : \n";

    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        cout<<arr2[iCnt]<<"\t";
    }
    cout<<"\n";

    return 0;
}