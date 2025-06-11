#include<iostream>
using namespace std;

class mrh
{
public:
    char name[10];
    char id[10];
    void input()
    {
        cout << "Enter name : ";
        cin >> name;
        fflush(stdin);
        cout << "Enter id : ";
        cin >> id;
        fflush(stdin);
    }
};
mrh *student;

int main()
{
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
