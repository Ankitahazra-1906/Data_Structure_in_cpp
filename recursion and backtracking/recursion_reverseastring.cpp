//Reverse a string using recursion
#include<iostream>
using namespace std;
void reverse_string(string s){
    if(s.length()==0){
        return;                  //base case
    }
    string rest=s.substr(1);
    reverse_string(rest);
    cout<<s[0];

}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    reverse_string(s);
}