#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;


    node(int value){
    data=value;
    left=right=nullptr;
    }

};


class bst{
private:
    node* root;

    node* insertNode(node* node_,int value){
        if(node_==nullptr){
            return new node(value);
        }

        if(value<=node_->data){
            node_->left=insertNode(node_->left,value);
        }
        else if(value>node_->data){
            node_->right=insertNode(node_->right,value);
        }
       return node_;
    }


    void inorderTraversal(node *node){
        if(node==nullptr)return;

        inorderTraversal(node->left);
        cout<<node->data<<" ";
        inorderTraversal(node->right);

    }

public:

    bst(){
        root=nullptr;
    }

    void insert(int value){
      root=insertNode(root,value);

    }

    void inorder(){
        cout<<"Inorder Traversal: ";
        inorderTraversal(root);
    }

};


int main(){
    bst tree;
    int no_node,value;

    cout<<"Enter the no. of nodes: ";
    cin>>no_node;

    for(int i=0;i<no_node;i++){

        cout<<"Value of node "<<i+1<<": ";
        cin>>value;
        tree.insert(value);

    }

    tree.inorder();
}
