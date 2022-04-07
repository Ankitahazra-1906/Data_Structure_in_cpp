//Replace pi in a string with 3.14
#include<iostream>
using namespace std;
void replacepi(string str){
    if(str.length()==0){
        return;    //base case
    }
    if(str[0]=='p' && str[1]=='i'){
        cout<<"3.14";
        string rest=str.substr(2);
        replacepi(rest);

    }
    else{
        cout<<str[0];
        replacepi(str.substr(1));
    }
}
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    replacepi(str);
}