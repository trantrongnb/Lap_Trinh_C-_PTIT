#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<vector>
#include<sstream>
#define ll long long
int MAX=1e9+7;
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ms=0;
        for(auto p:mp){
            ms=max(p.second,ms);
        }
        if(ms>(s.size()-ms)+1) cout<<0<<endl;
        else cout<<1<<endl;
    }
}