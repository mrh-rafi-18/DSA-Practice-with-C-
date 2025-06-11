#include<iostream>
using namespace std;

class mrh
{
public:
    void over_r()
    {
        cout<<"mrh"<<endl;
    }
};
class rafi: public mrh
{
public:
    void over_r()
    {
        cout<<"rafi"<<endl;
    }
};
class hossain: public mrh
{
public:
    void over_r()
    {
        cout<<"hossain"<<endl;
    }
};

int main()
{
    mrh m;
    rafi r;
    hossain h;

    m.over_r();
    r.over_r();
    h.over_r();
}
