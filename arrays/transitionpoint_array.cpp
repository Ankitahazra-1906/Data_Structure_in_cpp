#include<iostream>
using namespace std;
int transition_point(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            return i;
        }

    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<transition_point( arr, n);
    return 0;
   
}