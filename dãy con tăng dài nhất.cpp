#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int n;
int a[100];
void check(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int dp[n];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i]) dp[i]=max(dp[j]+1,dp[i]);
        }
    }
    sort(dp,dp+n);
    cout<<dp[n-1]+1<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}