#include<iostream>
#include<cmath>

using namespace std;

class node{
    public:
    int data;
    node *left_child;
    node *right_child; 

    node (int val){
        data=val;
        left_child=NULL;
        right_child=NULL;

    }  
};


void inorder_traversal(node* temp){
    if(temp==NULL){
        return;
    }
    inorder_traversal(temp->left_child);
    cout<<temp->data<<"  ";
    inorder_traversal(temp->right_child);
    
     return ;
}


void preorder_traversal(node* temp){
    if(temp==NULL){
        return ;
    }
    cout<<temp->data<<"  ";
    preorder_traversal(temp->left_child);
    preorder_traversal(temp->right_child);

    return ;
}


void postorder_traversal(node* temp){
    if(temp==NULL){
        return;
    }
    postorder_traversal(temp->left_child);
    postorder_traversal(temp->right_child);
    cout<<temp->data<<"  ";

    return;
}




int main(){
    //a perfect tree of hight 2
    node *root =new node(1);
    root->left_child=new node(2);
    root->right_child=new node(3);

    root->left_child->left_child=new node(4);
    root->left_child->right_child=new node(5);
    root->right_child->left_child=new node(6);
    root->right_child->right_child=new node(7);
    cout<<"inorder traversal "<<endl;
    inorder_traversal(root);
    cout<<endl<<"preorder traversal "<<endl;
    preorder_traversal(root);
    cout<<endl<<"postorder traversal "<<endl;
    postorder_traversal(root);


    return 0;
}
    