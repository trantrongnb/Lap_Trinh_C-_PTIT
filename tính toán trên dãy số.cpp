#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
typedef long long ll;
int mod=1e9+7;
int ucln(int a,int b){
    if(b==0) return a;
    return ucln(b,a%b);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int uc=a[1];
        for(int i=2;i<=n;i++){
            uc=ucln(uc,a[i]);
        }
        ll sum=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=uc;j++){
                sum*=a[i];
                sum%=mod;
            }
        }
        cout<<sum<<endl;
    }
}