#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the no of rows and columns: ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];

        }
    }
    cout<<"The matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    
}