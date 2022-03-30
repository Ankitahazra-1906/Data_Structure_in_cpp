//searching an element in an array through linear search
#include<iostream>
using namespace std;
int linearsearch(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return 0;

}
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element you want to find in the array: ";
    cin>>key;
    cout<<linearsearch(arr,key,n);
}