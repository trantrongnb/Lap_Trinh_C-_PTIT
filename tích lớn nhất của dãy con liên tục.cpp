#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;
void check(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    ll ans=1;
    for(int i=0;i<n;i++){
        ll tmp=1;
        for(int j=i;j<n;j++){
            tmp*=a[j];
            ans=max(tmp,ans);
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}