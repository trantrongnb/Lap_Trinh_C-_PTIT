#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<vector>
#include<set>
int main(){
    string s;cin>>s;
    for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
    string tt="aeiuoy";
    string ans="";
    for(int i=0;i<s.size();i++){
        if(tt.find(s[i])==string::npos)
        ans=ans+"."+s[i];
    }
    cout<<ans;
}