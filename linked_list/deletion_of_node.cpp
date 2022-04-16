#include<iostream>
using namespace std;
struct node{
    int data;
    node*link;
};
node*head=NULL;
//function to delete node at the beginning
void del_beg(){
    if(head==NULL){
        cout<<"list is empty";
    }
    else{
        node*ptr=head;
        head=head->link;
        free(ptr);
    }
    

}
//function to delete node at the end
void del_end(){
    node*ptr;
    //if the list is empty
    if(head==NULL){
        cout<<"list is empty"<<endl;   
    }
    //if there is one node
    else if(head->link==NULL){
        ptr=head;
        head=NULL;
        free(ptr);               

    }
    //if there is more than one node
    else{
        node*prev;
        ptr=head;
        while(ptr->link!=NULL){
            prev=ptr;
            ptr=ptr->link;

        }
        prev->link=NULL;
        free(ptr);
    }
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
    node*ptr=head;
    if(head==NULL){
        cout<<"list is empty";
    }
    else{
        while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;

    }
    cout<<"\n";

    }
    
}
int main(){
    insert_node_at_end(1);
    insert_node_at_end(2);
    insert_node_at_end(3);
    insert_node_at_end(4);
    insert_node_at_end(5);
    display_link();
    del_beg();
    display_link();
    del_end();
    display_link();
}