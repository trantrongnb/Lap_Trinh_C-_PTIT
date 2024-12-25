#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int n,m;
int a[101][101];
bool used[101][101];
vector<int> v;
void dfs(int i,int j){
    v.push_back(a[i][j]);
    used[i][j]=true;
    if(i-1>=1&&j+1<=m&&!used[i-1][j+1]){
        dfs(i-1,j+1);
    }
    if(i+1<=n&&j-1>=1&&!used[i+1][j-1]){
        dfs(i+1,j-1);
    }
    if(i==1){
         if(j+1<=n&&!used[i][j+1]){
        dfs(i,j+1);
         if(i+1<=n&&!used[i+1][j]){
        dfs(i+1,j);
    }
    }
    }
     if(i+1<=n&&!used[i+1][j]){
        dfs(i+1,j);
    }
     if(j+1<=n&&!used[i][j+1]){
        dfs(i,j+1);
    }
}
void check(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    memset(used,false,sizeof(used));
    dfs(1,1);
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
        for(int x:v) cout<<x<<" ";
        cout<<endl;
        v.clear();
    }
}