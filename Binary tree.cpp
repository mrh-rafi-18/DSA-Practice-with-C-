#include<iostream>
#include<queue>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;


    node(int value){
    data = value;
    left=right=nullptr;
    }

};


class binary_tree{
private:
    node* root;

    void inorder(node* node){
        if(node==nullptr)return;
        inorder(node->left);
        cout<<node->data<<" ";
        inorder(node->right);

    }

    void preorder(node* node){
        if(node==nullptr)return;
        cout<<node->data<<" ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(node* node){
        if(node==nullptr)return;
        preorder(node->left);
        preorder(node->right);
        cout<<node->data<<" ";
    }

public:
    binary_tree(){
    root=nullptr;

    }

    void insert(int value){

        if(root==nullptr){
            root = new node(value);
            return;
        }

        queue<node*> q;
        q.push(root);

        while(!q.empty()){

            node* current_node=q.front();
            q.pop();

            if(current_node->left==nullptr){
                current_node->left=new node(value);
                break;
            }
            else{
                q.push(current_node->left);
            }

            if(current_node->right==nullptr){
                current_node->right=new node(value);
                break;
            }
            else{
                q.push(current_node->right);
            }

        }


    }


    void inorderTraversal(){
        cout<<"Inorder Traversal: ";
        inorder(root);
        cout<<endl;

    }

    void preorderTraversal(){
        cout<<"preorder Traversal: ";
        preorder(root);
        cout<<endl;

    }

    void postorderTraversal(){
        cout<<"postorder Traversal: ";
        postorder(root);
        cout<<endl;

    }



};


int main(){
binary_tree tree;
int value,no_node;


cout<<"Enter the no. of nodes in tree :";
cin>>no_node;

for(int i=0;i<no_node;i++)
{
    cout<<"Value of node "<<i+1<<": ";
    cin>>value;
    tree.insert(value);
}


tree.inorderTraversal();
tree.preorderTraversal();
tree.postorderTraversal();

}
