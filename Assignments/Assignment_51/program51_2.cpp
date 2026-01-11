/*
    2. Write generic program to accept N values and count frequency of any specific value. 

    Input :     10  20  30  10  30  40  10  40  10
    Value to check frequency : 10
    Output :    4  
*/

#include<iostream>
using namespace std;

template<class T>
int Frequency(T *arr, int iSize, T No)
{
    int iCnt = 0;
    int Frequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == No)
        {
            Frequency++;
        }
    }

    return Frequency;
}

int main()
{
    int iRet1 = 0, iRet2 = 0;
    int arr1[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    float arr2[] = {10.1, 20.2, 30.3, 10.1, 30.5, 40.6, 10.1, 40.8, 10.1};

    iRet1 = Frequency(arr1, 9, 10);
    iRet2 = Frequency(arr2, 9, 10.1f);
    
    cout<<"Frequency is : "<<iRet1<<"\n";
    cout<<"Frequency is : "<<iRet2<<"\n";

    return 0;
}