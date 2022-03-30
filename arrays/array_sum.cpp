#include<iostream>
using namespace std;
int sumElement(int arr[],int n){
    int sum;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumElement(arr,n);
    
    
}