#include<iostream>
#include<math.h>
typedef long long ll;
using namespace std;
typedef long long ll;
int P=1e9+7;
ll dp[1001][1001];
void sinh(){
    dp[1][0]=1;
    dp[1][1]=1;
    for(int i=2;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i) dp[i][j]=1;
            else {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                dp[i][j]%=P;
            }
        }
    }
}
int main(){
    sinh();
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        cout<<dp[n][k]<<endl;
    }
}