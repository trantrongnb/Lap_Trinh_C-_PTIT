#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        long long dp[n+1];
        long long ans=0;
        for(int i=1;i<=n;i++){
            dp[i]=a[i];
            for(int j=i-1;j>=1;j--){
                if(a[i]>a[j]){
                    dp[i]=max(dp[i],dp[j]+a[i]);
                }
            }
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }
}