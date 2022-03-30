//Given an array of size n.For every array of 0 to n-1,output max will be (a[0],a[1]....a[i])
//Finding out maximum number after every iteration
#include<iostream>
using namespace std;
int main(){
    int n;
    int mx=-1999999;
    cout<<"enter the size of the array: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        mx=max(mx,array[i]);
        cout<<mx<<" ";
    }
}