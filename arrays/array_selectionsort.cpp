//Sorting the elements in an array using Selection Sort
#include<iostream>
using namespace std;
int main(){
    int n, i,j;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"After sorting: ";
    for( i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}