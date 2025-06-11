#include<iostream>
using namespace std;



class shape
{
public:
    double a;
    double b;
    shape(double a,double b)
    {
        this ->a=a;
       this-> b=b;
    }
   virtual void area()
    {
        //dfdsf;
    }
};
class trianle : public shape
{
public:

    trianle(double a,double b)
    : shape(a,b)
    {

    }

    void area()
    {
        double area2=0.5*(a*b);

        cout<<"Area of triangle : "<<area2<<endl;
    }
};
class rectangle:public shape
{
public:
    rectangle(double a,double b)
    : shape(a,b)
    {

    }
    void area()
    {
        double area3=(a*b);

        cout<<"Area of rectangle : "<<area3<<endl;
    }
};


int main()
{
    shape *p;
    double a,b;
    cout<<"Enter base and height : ";
    cin>>a>>b;
    trianle cred(a,b);
    cout<<"Enter height and width : ";
    cin>>a>>b;
    rectangle cred2(a,b);
    p=&cred;
    p->area();
    p=&cred2;
    p->area();


}

