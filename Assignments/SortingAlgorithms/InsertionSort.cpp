#include<iostream>
using namespace std;

void InsertionSort(int *Brr, int iSize)
{
    int i = 0;
    int curr = 0, prev = 0;

    for(i = 1; i < iSize; i++)
    {
        curr = Brr[i];
        prev = i - 1;

        while(prev >= 0 && Brr[prev] > curr)
        {
            Brr[prev + 1] = Brr[prev];
            prev--;
        }

        Brr[prev + 1] = curr;
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *Arr;

    cout<<"Enter the size of array : \n";
    cin>>iSize;

    Arr = new int[iSize];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter the "<<iCnt + 1<<" Element : \n";
        cin>>Arr[iCnt];
    }

    InsertionSort(Arr, iSize);

    cout<<"Sorted Array : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";

    return 0;
}