#include<iostream>
#include<string.h>
using namespace std;


class one
{
public:
    char name[10];
    int age;
    one(char name[],int age)
    {
        strcpy(this->name,name);
        this->age=age;
    }
    virtual void view()=0;
};


class two:public one
{
public:

    two(char name[],int age):one(name,age)
    {

    }
    void view()
    {
        cout<<name<<endl<<age<<endl;
    }
};

class three: public one
{
public:

    three(char name[],int age):one(name,age)
    {

    }
    void view()
    {
        cout<<name<<endl<<age<<endl;
    }
};

int main()
{
    one *p;
    char name[10];
    int age;

    cout<<"Enter name :"<<endl;
    cin>>name;
    cout<<"Enter age :"<<endl;
    cin>>age;
    two t(name,age);

    fflush(stdin);
    cout<<"Enter name :"<<endl;
    cin>>name;
    cout<<"Enter age :"<<endl;
    cin>>age;
    three th(name,age);
    p=&t;
    p->view();
    p=&th;
    p->view();
}

