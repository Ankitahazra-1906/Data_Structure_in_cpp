//Searching an element in an matrix
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the rows and columns: ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int x;
    cout<<"Enter the number you want to find: ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<"Its index is"<<i<<j<<endl;
                flag=true;
            }

        }
    }
    
    if(flag){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }
}