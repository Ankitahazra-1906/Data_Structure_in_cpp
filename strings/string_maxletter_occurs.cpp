//program to find the maximum letters in a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="abhgjkloutdsa";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }
    char ans='a';
    int maxfreq=0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxfreq){
            maxfreq=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxfreq<<" "<<ans;
}