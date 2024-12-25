#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
int ucln(ll a, ll b){
    if(b==0) return a;
    return ucln(b,a%b);
}
int main(){
    int t;cin>>t;
    while(t--){
    ll n,m;cin>>n>>m;
    ll sum=(n+1)*n/2;
    ll a=(sum+m)/2;
    ll b=(sum-m)/2;
    if(a+b==sum){
        if(ucln(a,b)==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    } else cout<<"No"<<endl;
    }
}