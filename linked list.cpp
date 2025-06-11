#include<iostream>

using namespace std;

struct node{

int value;

struct node *next;

};

struct node *first=NULL;


void create_linked_list(int no_node){

struct node *temp=new node;
first=temp;
cout<<"Insert node-1 value : ";
cin>>temp->value;
temp->next=NULL;

for(int i=2; i<=no_node; i++)
{
    temp->next=new node;
    temp=temp->next;
    cout<<"Insert node-"<<i<<" value : ";
    cin>>temp->value;
    temp->next=NULL;

}

cout<<"List created successfully\n";

}



void display_list(){

cout<<"List values : ";

struct node *temp=first;
while(temp)
{
  cout<<temp->value<<" ";
  temp=temp->next;

}

}


void recursive_rev(struct node *before_temp,node *temp)
{



    if(temp!=NULL)
    {

        recursive_rev(temp,temp->next);

        if(temp->next==NULL)
        {
            first=temp;
        }

        temp->next=before_temp;
    }
    before_temp=NULL;
}


void rev_with_sliding_pointer()
{

    struct node *p,*q,*r;

    p=first;

    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;

    }
    first=q;

}


int main()
{
    int no_node=0;
    while(1){

        cout<<"Enter no. of node : ";
        cin>>no_node;

        create_linked_list(no_node);
        display_list();
        recursive_rev(NULL,first);
        display_list();
        break;
    }
}
