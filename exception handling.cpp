#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
again:
    system("cls");
    try
    {
        int n1,n2;
        cout<<"Enter no. 1 : ";
        cin>>n1;
        cout<<"Enter no. 2 : ";
        cin>>n2;

        if(n2==0)throw -1;
        double result=(double) n1/n2;
        cout<<"Result is :"<<result<<endl;
        if(getch()=='1')goto again;
    }
    catch(...)
    {
        cout<<"The result is infinity.\nTry again."<<endl;

        if(getch()=='1')goto again;
    }
}
