#include<iostream>
using namespace std;
int main(){
    /*int arr[5]={24,45,87,90,54};
    cout<<arr[3];*/
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}