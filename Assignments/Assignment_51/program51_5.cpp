/*
    5. Write generic program to accept N values and reverse the contents. 

    Input :     10  20  30  10  30  40  10  40  10
    Output :    10  40  10  40  30  10  30  20  10
*/

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = (iSize - 1); iCnt >= 0; iCnt--)
    {
        cout<<arr[iCnt]<<"\t";
    }

    cout<<"\n";
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

    cout<<"Array is : \n";
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";

    cout<<"Array in Reverse Order : \n";
    Reverse(arr, 9);

    return 0;
}