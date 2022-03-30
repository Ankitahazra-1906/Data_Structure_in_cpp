//Finding maximum and minimum number from an array
#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cout<<"Enter the size of an array: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
//Ist method
/*int max=arr[0];
int min=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    else if(arr[i]<min){
        min=arr[i];
    }
}*/
//2nd method
int max_no=INT_MIN;
int min_no=INT_MAX;
for(int i=0;i<n;i++){
    max_no=max(max_no,arr[i]);
    min_no=min(min_no,arr[i]);
    }

cout<<max_no<<endl<<min_no<<endl;
}