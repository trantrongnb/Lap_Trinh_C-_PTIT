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
int main(){
    int t;cin>>t;
    while(t--){
        string n;ll m;
        cin>>n>>m;
        ll ans=0;
        for(int i=0;i<n.size();i++){
            ans=(ans*10+n[i]-'0')%m;
        }
        cout<<ans<<endl;
    }
}