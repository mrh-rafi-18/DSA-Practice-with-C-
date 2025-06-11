#include<iostream>
using namespace std;

template<class my,class urs>
urs add(my a,urs b)
{
    return a+b;
}

int main()
{
    int a=3;
    double b=10.5;

    cout<<"Result is : " <<add(a,b);
}


