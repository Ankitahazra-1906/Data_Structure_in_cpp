//Given an array of size n.Output sum of each subarray of the given array
//Sum of all subarrays
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int curr=0;
    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }
    }
}