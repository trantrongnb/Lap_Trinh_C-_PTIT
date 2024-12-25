#include<iostream>
using namespace std;
#include<string>
#include<cstring>
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
char a[21][21];
int dp[21][21];
int n,m;
void loang(int i,int j){
    dp[i][j]=1;
    for(int k=0;k<4;k++){
        int i1=dx[k]+i,j1=dy[k]+j;
        if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]=='O'&&dp[i1][j1]==0) loang(i1,j1);
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin>>a[i][j];
        }
        for(int i=1;i<=m;i++) if(a[1][i]=='O'&&dp[1][i]==0) loang(1,i);
        for(int i=1;i<=n;i++) if(a[i][m]=='O'&&dp[i][m]==0) loang(i,m);
        for(int i=1;i<=m;i++) if(a[n][i]=='O'&&dp[n][i]==0) loang(n,i);
        for(int i=1;i<=n;i++) if(a[i][1]=='O'&&dp[i][1]==0) loang(i,1);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(dp[i][j]==0) cout<<"X ";
                else cout<<"O ";
            }
            cout<<endl;
        }
    }
}