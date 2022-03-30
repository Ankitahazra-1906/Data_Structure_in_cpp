//check whether the word is a pallindrome or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the word: ";
    cin>>n;
    char arr[n+1];
    cout<<"Enter the word: ";
    cin>>arr;
    bool check=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=false;
            break;
        }
    }
    if(check ==true){
        cout<<"Word is pallindrome";
    }
    else{
        cout<<"Word is not pallindrome";
    }

}