#include<iostream>
using namespace std;

void EfficientBubbleSort(int *Brr, int iSize)
{
    int i = 0, j = 0, temp = 0;

    for(i = 0; i < iSize-1; i++)
    {
        bool bSwap = false;
        for(j = 0; j < (iSize-i-1); j++)
        {
            if(Brr[j+1] < Brr[j])
            {
                bSwap = true;
                temp = Brr[j];
                Brr[j] = Brr[j+1];
                Brr[j+1] = temp;
            }
        }

        if(bSwap == false)
        {
            break;
        }
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

    EfficientBubbleSort(Arr, iSize);

    cout<<"Sorted Array : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";

    return 0;
}