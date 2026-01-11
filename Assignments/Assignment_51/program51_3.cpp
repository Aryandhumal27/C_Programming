/*
    3. Write generic program to accept N values and search first occurrence of any specific value.

    Input :     10  20  30  10  30  40  10  40  10
    Value to search :   40
    Output :    6
*/

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T No)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == No)
        {
            break;
        }
    }

    return (iCnt + 1);
}

int main()
{
    int iRet1 = 0, iRet2 = 0;
    int arr1[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    float arr2[] = {10.1, 20.2, 30.3, 10.1, 30.5, 40.6, 10.1, 40.8, 10.1};

    iRet1 = SearchFirst(arr1, 9, 40);
    iRet2 = SearchFirst(arr2, 9, 40.6f);
    
    cout<<"first occurrence of element is : "<<iRet1<<"\n";
    cout<<"first occurrence of element is : "<<iRet2<<"\n";

    return 0;
}