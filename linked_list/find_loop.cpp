#include<iostream>
using namespace std;
struct node{
    int data;
    node*link;
};
node*head=NULL;
//detection or finding of loop in a linked list
int findloop(node*head){
    node*fast;
    node*slow;
    slow=head;
    fast=head;
    while(fast!=NULL && fast->link!=NULL){
        fast=fast->link->link;
        slow=slow->link;
        if(fast==slow){
            return 1; //found loop

        }
    }
    return 0; //no loop
}
