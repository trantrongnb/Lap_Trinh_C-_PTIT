#include <iostream>
#include <vector>
#include <algorithm>
#include<math.h>
#include<cstring>
int mod=1e9+7;
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        int n;ll s;
        cin>>n>>s;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        ll sum=0;
        int l=1,r=1;
        int ans=1e9;
        while(r<=n){
            sum=sum+a[r];
            while(sum>s){
                ans=min(ans,r-l+1);
                sum-=a[l];
                l++;
            }
            r++;
        }
        if(ans==1e9) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}