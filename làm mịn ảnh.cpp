#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m,l;cin>>n>>m>>l;
        int dp[502][502];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>dp[i][j];
                dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            }
        }
        for(int i=l;i<=n;i++){
            for(int j=l;j<=m;j++){
                cout<<(dp[i][j]-dp[i-l][j]-dp[i][j-l]+dp[i-l][j-l])/(l*l)<<" ";
            }
            cout<<endl;
        }
    }
}