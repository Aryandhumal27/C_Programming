/*
    4. Write generic program to swap two values. 
*/

#include<iostream>
using namespace std;

template<class T>
void Swap(T &No1, T &No2)
{
    T temp = No1;
    No1 = No2;
    No2 = temp;
}

int main()
{
    int a = 0, b = 20;
    cout<<"Before Swap : \n";
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<"\n";

    Swap(a, b);
    cout<<"After Swap : \n";
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<"\n";
    

    float x = 3.5f, y = 7.8f;
    cout<<"Before Swap : \n";
    cout<<"x = "<<x<<"\t"<<"y = "<<y<<"\n";

    Swap(x, y);
    cout<<"After Swap : \n";
    cout<<"x = "<<x<<"\t"<<"y = "<<y<<"\n";

    return 0;
}