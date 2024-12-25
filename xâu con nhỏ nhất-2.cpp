#include<iostream>
#include<string>
#include<set>
#include<algorithm>
#include<unordered_map>
using namespace std;
int check(){
    string s;cin>>s;
    unordered_map<char,int> mp;
    int ans=1e9;
    for(int i=0;i<s.size();i++) mp[s[i]]++;
    int n=mp.size();
    for(int i=0;i<s.size();i++){
        int count=0;
        int used[256]={0};
        string res="";
        for(int j=i;j<s.size();j++){
            if(used[s[j]]==0){
                used[s[j]]=1;
                count++;
            }
            res+=s[j];
            if(count==n) break;
        }
        if(count==n&&res.size()<ans){
            ans=res.size();
        }
    }
    return ans;
}
int main(){
    int t;cin>>t;
    while(t--){
       cout<<check()<<endl;
    }
}