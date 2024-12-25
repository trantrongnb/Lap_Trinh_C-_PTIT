#include<iostream>
#include<math.h>
#include<algorithm>
typedef long long ll;
using namespace std;
typedef long long ll;
int P=1e9+7;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        ll a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        ll dp[n+1];
        dp[1]=a[1];
        dp[2]=max(a[1],a[2]);
        for(int i=3;i<=n;i++){
            dp[i]=max(dp[i-2]+a[i],dp[i-1]);
        }
        cout<<dp[n]<<endl;
    }
}