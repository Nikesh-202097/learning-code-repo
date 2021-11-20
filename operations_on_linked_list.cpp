#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node *next;

    node(){
        next= NULL;
    }
    
};

void insert(node *pre_node ){
    
    node *new_node1=new node();
    cout<<"enter data of inserted node"<<endl;
    int new_data;
    cin>>new_data;
    new_node1->next=pre_node->next;
    pre_node->next=new_node1;
    new_node1->data=new_data;

    return;
}
void Delete(node *pre_target_node ){
    if(pre_target_node->next==NULL){
        cout<<"wrong deletion node";//pre_target_node is last node so there is no any  target node  
        return;
    }
    node *temp=pre_target_node->next;
    pre_target_node->next=temp->next;

    return;
    
}

void update(node *target_node,int new_data){
    target_node->data=new_data;

    return;
}

void print(node* head ){
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

void reverse(node *head){
    node *current=head;
    node *pre=NULL,*nxt=NULL;
    while(current!=NULL){
        nxt=current->next;
        current->next=pre;
        pre=current;
        current=nxt;
        
    }
    head=pre;
    cout<<endl<<"linked list after reverse"<<endl;
    print(head);

    return;

}




int main(){
    cout<<"enter data for linked list "<<endl;
    int num;
    cin>>num;
    node *first= new node();
    first->data=num;
    node *head=first;
    node *second= new node();
    first->next=second;
    cin>>num;
    second->data=num;
    node *third = new node();
    second->next=third;
    cin>>num;
    third->data=num;
    insert(second);
    cout<<"linked list after insertion"<<endl;
    print(head);
    Delete(second);
    cout<<endl<<"linked list after deletion"<<endl;
    print(head);
    update(third,0);
    cout<<endl<<"linked list after upate"<<endl;
    print(head);
    reverse(head);
    
    

    return 0;

}

