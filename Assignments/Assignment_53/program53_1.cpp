/*
    1. Write generic program to copy one array into another
*/
#include<iostream>
using namespace std;

template<class T>
void CopyArray(T *src, T *dest, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }
}

int main()
{
    int iCnt = 0;
    int iSize = 5;
    int SrcArr[] = {10, 20, 30, 40, 50};
    int *DestArr = new int[iSize];

    CopyArray(SrcArr, DestArr, iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<DestArr[iCnt]<<"\t";
    }

    cout<<"\n";

    delete[] DestArr;
    
    return 0;
}