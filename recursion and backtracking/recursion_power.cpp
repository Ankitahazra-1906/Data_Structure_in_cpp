//Calculate n raised to power p
#include<iostream>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevpower=power(n,p-1);
    return n*prevpower;

}
int main(){
    int n,p;
    cout<<"Enter the number and the exponent: ";
    cin>>n>>p;
    cout<<"The answer of "<<n<<" to the power "<<p<<" is "<<power(n,p)<<endl;
}