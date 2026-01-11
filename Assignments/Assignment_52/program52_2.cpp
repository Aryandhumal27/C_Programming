/*
    2. Write generic program to find largest number from three numbers. 
*/
#include<iostream>
using namespace std;

template<class T>
T Max(T No1, T No2, T No3)
{
    if(No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    int iRet = 0;
    float fRet = 0.0;

    iRet = Max(10, 30, 20);
    fRet = Max(10.5f, 30.8f, 23.7f);

    cout<<"Maximum number from integer is : "<<iRet<<"\n";
    cout<<"Maximum number from float is : "<<fRet<<"\n";

    return 0;
}