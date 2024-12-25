#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<algorithm>
int main(){
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        int a[n+1],sum[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
         sum[0]=0;
         for(int i=1;i<=n;i++){
            sum[i]=sum[i-1]+a[i];
         }      
         while(q--){
            int l,r;cin>>l>>r;
            cout<<sum[r]-sum[l-1]<<endl;
         }
    }
}