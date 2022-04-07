//Remove all x at the end of the string
#include<iostream>
using namespace std;
string removeallx(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=removeallx(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }
}
int main(){
    string s;
    cin>>s;
    cout<<removeallx(s);
}