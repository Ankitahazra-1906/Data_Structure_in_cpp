//Calculate the factorial of n numbers
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int prevfactorial=factorial(n-1);
    return n*prevfactorial;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factorial is "<<factorial(n)<<endl;
}