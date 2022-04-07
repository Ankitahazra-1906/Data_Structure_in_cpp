//Print the numbers till n in increasing and decreasing order
#include<iostream>
using namespace std;
void increasing(int n){
    if(n==0){
        return;
    }
    increasing(n-1);
    cout<<n<<endl;
}
void decreasing(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    decreasing(n-1);
}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"The increasing order is:"<<endl;
    increasing(n);
    cout<<"The decreasing order is:"<<endl;
    decreasing(n);
}