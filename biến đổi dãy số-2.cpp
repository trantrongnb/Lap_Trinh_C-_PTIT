#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<cstring>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        ll ans[n];
        ans[0]=(long long)a[0]*a[1];
        ans[n-1]=(long long)a[n-1]*a[n-2];
        for(int i=1;i<n-1;i++){
            ans[i]=(ll)(a[i-1])*a[i+1];
        }
        for(ll x:ans) cout<<x<<" ";
        cout<<endl;
    }
}