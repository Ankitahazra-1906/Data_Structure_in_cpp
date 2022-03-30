#include<iostream>
using namespace std;
int main(){


    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i+=2){
        int temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    cout<<"waveform array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}