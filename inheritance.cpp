#include<iostream>
#include<string.h>
using namespace std;

class studen
{
public:
   char name[5];
    int age;

};

class family : public studen
{
public:
   char mother[5];
   char father[5];
   void display()
    {
        cout<< name<<endl;
        cout<<age<<endl;
        cout<<mother<<endl;

        cout<<father<<endl;
    }
};

int main()
{
    family mrh;

    strcpy(mrh.name,"rafi");
    mrh.age=18;
     strcpy(mrh.father,"abdus");

    strcpy(mrh.mother,"amen");

    mrh.display();





}
