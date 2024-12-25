#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int a[n+1][m+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin>>a[i][j];
        }
        int tc[4][4];
        for(int i=1;i<=3;i++){
            for(int j=1;j<=3;j++) cin>>tc[i][j];
        }
        long long ans=0;
        for(int i=1;i<=n-2;i++){
            for(int j=1;j<=m-2;j++){
               ans+=a[i][j]*tc[1][1];
               ans+=a[i][j+1]*tc[1][2];
               ans+=a[i][j+2]*tc[1][3];
               ans+=a[i+1][j]*tc[2][1];
               ans+=a[i+1][j+1]*tc[2][2];
               ans+=a[i+1][j+2]*tc[2][3];
               ans+=a[i+2][j]*tc[3][1];
               ans+=a[i+2][j+1]*tc[3][2];
               ans+=a[i+2][j+2]*tc[3][3];
            }
        }
        cout<<ans<<endl;
    }
}