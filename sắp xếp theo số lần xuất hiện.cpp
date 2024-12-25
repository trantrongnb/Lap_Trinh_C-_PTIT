#include <iostream>
#include <vector>
#include <algorithm>
#include<math.h>
#include<cstring>
#include<utility>
#include<string>
#include<map>
using namespace std;
bool cmp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second==p2.second) return p1.first<p2.first;
    return p1.second>p2.second;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x]++;
        }
        vector<pair<int,int> > v;
        for(auto p:mp){
            v.push_back(p);
        }
        sort(v.begin(),v.end(),cmp);
        for(auto p:v){
            for(int i=1;i<=p.second;i++) cout<<p.first<<" ";
        }
        cout<<endl;
    }
}