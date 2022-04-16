#include<iostream>
using namespace std;
struct node{
    int data;
    node*link;
};
node*head=NULL;
//function to find the middle element of the list
void middle_element(){
    node*slow=head;
    node*fast=head;
    if(head==NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        while(fast!=NULL&&fast->link!=NULL){

            slow=slow->link;
            fast=fast->link->link;
        }
        cout<<"middle elemnet is "<<slow->data<<endl;
    }

        
}
    


void insert_beg(int d){
    node*ptr=new node();
    ptr->data=d;
    ptr->link=head;
    head=ptr;

}
void display_link(){
    node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    cout<<"\n";
}
int main(){
    insert_beg(5);
    insert_beg(15);
    insert_beg(25);
    insert_beg(35);
    insert_beg(45);
    display_link();
    
    middle_element();
    
}