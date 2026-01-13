/*
    5. Write generic program to find maximum of four values. 
*/

#include<iostream>
using namespace std;

template<class T>
T Max(T a, T b, T c, T d)
{
    if(a > b && a > c && a > d)
    {
        return a;
    }
    else if(b > a && b > c && b > d)
    {
        return b;
    }
    else if(c > a && c > b && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    cout<<"Maximum element is : "<<Max(10, 11, 12, 13)<<"\n";
    cout<<"Maximum element is : "<<Max(10.56f, 111.56f, 12.67f, 13.876f)<<"\n";

    return 0;
}