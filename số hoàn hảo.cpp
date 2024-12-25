#include<iostream>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<vector>
#include<string>
#include<cstring>
#include<map>
using namespace std;
typedef long long ll;
int check(ll n){
    if(n==1) return 0;
    if (n > (ll)1e12) return 0;
    ll sum=1;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=i;
            if(i*i!=n) sum+=n/i;
        }
    }
    return sum==n;
}
int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        cout<<check(n)<<endl;
    }
}