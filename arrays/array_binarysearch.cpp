//searching an element in an array through binary search
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if( arr[mid]==key){
            return mid;
        }
        else if(mid>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return 0;
    



}
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int key;
    cout<<"Enter the element you want to find: ";
    cin>>key;
    cout<<binarysearch(arr,n,key);   
}