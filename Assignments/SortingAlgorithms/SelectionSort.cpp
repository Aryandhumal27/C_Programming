#include<iostream>
using namespace std;

void SelectionSort(int *Brr, int Length)
{
    int i = 0, j = 0, temp = 0;
    int MinIndex = 0;

    for(i = 0; i < Length; i++)
    {
        MinIndex = i;
        for(j = i; j < Length; j++)
        {
            if(Brr[j] < Brr[MinIndex])
            {
                MinIndex = j;
            }
        }
    
        temp = Brr[i];
        Brr[i] = Brr[MinIndex];
        Brr[MinIndex] = temp;
    }
}


int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *Arr;

    cout<<"Enter the Size : \n";
    cin>>iSize;

    Arr = new int[iSize];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter the "<<iCnt + 1<<" element : \n";
        cin>>Arr[iCnt];
    }

    SelectionSort(Arr, iSize); 
    
    cout<<"Sorted Array : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    
    cout<<"\n";

    return 0;
}