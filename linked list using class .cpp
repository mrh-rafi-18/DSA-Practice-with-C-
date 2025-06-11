#include<iostream>

using namespace std;

class node{

public:
 int data;
 node *next;

};
node *temp;

class linked_list{

private:
    node *first;

public:
    linked_list()
    {
    first = NULL;
    }

    void insert_node(int);
    void display();

};


void linked_list::insert_node(int data)
{

    if(first==NULL)
    {
        temp = new node;
        first=temp;
        temp->data=data;
        first->next=NULL;
    }
    else
    {

        temp->next=new node;
        temp=temp->next;
        temp->data=data;
        temp->next=NULL;

    }
}

void linked_list::display()
{
    temp=first;
    cout<<"Linked list data : ";

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    linked_list list_1;
    int no_node;

    cout<<"Enter no. of nodes :";
    cin>>no_node;

    for(int i=0;i<no_node; i++)
    {
        int data;
        cout<<"Node-"<<i+1<<" :";
        cin>>data;
        list_1.insert_node(data);
    }

    list_1.display();

}
