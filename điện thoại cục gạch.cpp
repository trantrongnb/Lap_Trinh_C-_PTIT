#include <iostream>
#include <cstring>
#include<vector>
#include<map>
#include<string>
using namespace std;
int kt(string s){
    int l=0,r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]) return 0;
        l++;r--;
    }
    return 1;
}
int main(){
    map<string,int> mp;
    mp["abc"]=2;mp["def"]=3; mp["ghi"]=4;mp["jkl"]=5;
    mp["mno"]=6;mp["pqrs"]=7;mp["tuv"]=8;mp["wxyz"]=9;
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
        string ans;
        for(int i=0;i<s.size();i++){
            for(auto p:mp){
                if(p.first.find(s[i])!=string::npos){
                    ans+=to_string(p.second);break;
                }
            }
        }
        if(kt(ans)==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}