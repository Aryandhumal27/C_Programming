/*
    1. Write generic program to multiply two numbers. 
*/

#include<iostream>
using namespace std;

template<class T>
T Multiply(T No1, T No2)
{
    T Ans = 0;

    Ans = No1 * No2;

    return Ans;
}

int main()
{
    int iRet1 = 0;
    float iRet2 = 0;

    iRet1 = Multiply(10, 20);
    cout<<"Multiplication is : "<<iRet1<<"\n";

    iRet2 = Multiply(10.5f, 20.5f);
    cout<<"Multiplication is : "<<iRet2<<"\n";

    return 0;
}