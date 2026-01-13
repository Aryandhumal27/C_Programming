/*
    1. Write generic program to perform subtraction of two numbers. 
*/

#include<iostream>
using namespace std;

template<class T>
T Sub(T No1, T No2)
{
    T Ans = 0;

    Ans = No1 - No2;

    return Ans;
}

int main()
{
    int iRet = Sub(20, 10);
    cout<<iRet<<"\n";

    float fRet = Sub(20.3f, 10.5f);
    cout<<fRet<<"\n";

    return 0;
}