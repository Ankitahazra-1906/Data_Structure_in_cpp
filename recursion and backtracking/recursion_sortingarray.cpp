//check whether the array is sorted or not using recursion
#include<iostream>
using namespace std;
int sortingarray_using_recursion(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray=sortingarray_using_recursion(arr+1,n-1);
    return (arr[1]>arr[0] && restarray);
        
    
}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sortingarray_using_recursion(arr,n);
}