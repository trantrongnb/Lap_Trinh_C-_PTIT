#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;
int main(){
   int t;cin>>t;
   map<char,int> mp;
   while(t--){
    string s;cin>>s;
    int dem=0;
    for(int i=0;i<s.size();i++){
       mp[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==1) cout<<s[i];
    }
    cout<<endl;
    mp.clear();
   } 
}