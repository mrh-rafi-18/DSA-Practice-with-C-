#include<iostream>
#include "mrh.h"

using namespace std;

int main()
{
    mrh *student;
    student=(mrh*) calloc(3,sizeof(mrh));

    for(int i=0;i<3;i++)
    {
        student[i].input();
    }
    for(int i=0;i<3;i++)
        {
        cout << "\n\nName "<<i+1<<" : "<< student[i].name;
        cout << "\nEnter id : "<<student[i].id;
        }

}

