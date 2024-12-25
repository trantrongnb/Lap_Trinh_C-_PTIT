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
int ans=0;
int main(){
    int t;cin>>t;
    scanf(" ");
    while(t--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        stringstream ss1(a);
        string token;
        map<string,int> mp;
        while(ss1>>token){
            mp[token]=1;
        }
        stringstream ss2(b);
        while(ss2>>token){
            if(mp.find(token)!=mp.end()) mp[token]=0;
        }
        for(auto p:mp){
            if(p.second!=0) cout<<p.first<<" ";
        }
        cout<<endl;
    }
}