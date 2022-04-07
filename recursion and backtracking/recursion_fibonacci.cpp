//Print the nth fibonacci number
#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The "<<n<<"th"<<" fibonacci number is "<<fibonacci(n)<<endl;
}