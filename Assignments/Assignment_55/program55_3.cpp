/*
    3. Write generic program to perform division of two numbers. 
*/

#include<iostream>
using namespace std;

template<class T>
T Div(T No1, T No2)
{
    T Ans = 0;
    if(No2 == 0)
    {
        return -1;
    }

    Ans = No1 / No2;

    return Ans;
}

int main()
{
    int iRet = Div(20, 0);
    if(iRet == -1)
    {
        cout<<"Undefined : Can't divide by 0\n";
    }
    else
    {
        cout<<"Division of integers is : "<<iRet<<"\n";
    }

    float fRet = Div(20.3f, 2.0f);
    if(fRet == -1)
    {
        cout<<"Undefined : Can't divide by 0\n";
    }
    else
    {
        cout<<"Division of float is : "<<fRet<<"\n";
    }

    return 0;
}