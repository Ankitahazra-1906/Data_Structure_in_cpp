#include<iostream>
using namespace std;
struct node{
    int data;
    node*link;
};
node*head=NULL;
//function to reverse the list
void reverse_list(){
    node*prev,*curr,*next;
    prev=NULL;
    curr=head;
    while(curr!=0){
        next=curr->link;
        curr->link=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    
}
//function to insert node at the end of the linked list
void insert_node_at_end(int d){
    node*ptr=new node();
    ptr->data=d;
    ptr->link=NULL;

    //if the list is empty
    if(head==NULL){
        head=ptr;
    }

    //if the list is not empty
    else{
        node*temp=head;
        while(temp->link!=NULL){
            temp=temp->link;

        }
        temp->link=ptr;

    }
    

}
//function to display the list
void display_link(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;

    }
    cout<<"\n";
}
int main(){
    insert_node_at_end(1);
    insert_node_at_end(2);
    insert_node_at_end(3);
    insert_node_at_end(4);
    insert_node_at_end(5);
    display_link();
    reverse_list();
    display_link();
}