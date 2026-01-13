/*
    1. Write generic program to perform addition of two numbers. 
*/

#include<iostream>
using namespace std;

template<class T>
T Add(T No1, T No2)
{
    T Ans = 0;

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    int iRet = Add(10, 20);
    cout<<iRet<<"\n";

    float fRet = Add(10.5f, 20.3f);
    cout<<fRet<<"\n";

    return 0;
}