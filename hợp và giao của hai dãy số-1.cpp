#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<map>
#include<set>
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int a[n],b[m];
        map<int,int> mp;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            mp[a[i]]=1;
        }
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<m;i++){
            if(mp[b[i]]==1) mp[b[i]]=3;
            else mp[b[i]]=2;
        }
        for(auto p:mp){
            if(p.second!=0) cout<<p.first<<" ";
        }
        cout<<endl;
        for(auto p:mp){
            if(p.second==3) cout<<p.first<<" ";
        }
        cout<<endl;
    }
}