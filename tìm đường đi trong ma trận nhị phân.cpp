#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<utility>
#include<algorithm>
#include<queue>
using namespace std;
int n,m,x,y,z,t;
int a[1001][1001];
bool used[1001][1001];
int dis[1001][1001];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
int bfs(int i,int j){
    used[i][j]=true;
    queue<pair<int,int> > q;
    q.push(make_pair(i,j));
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        int x=p.first,y=p.second;
        if(x==z&&y==t) return dis[x][y];
        for(int k=0;k<4;k++){
            int i1=x+dx[k],j1=y+dy[k];
            if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&used[i1][j1]==false&&a[i1][j1]==1){
                used[i1][j1]=true;
                dis[i1][j1]=dis[x][y]+1;
                q.push(make_pair(i1,j1));
            }
        }
    }
    return -1;
}
void check(){
    memset(used,false,sizeof(used));
    memset(dis,0,sizeof(dis));
    cin>>n>>m>>x>>y>>z>>t;
    x++;y++;z++;t++;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    if(a[x][y]==0||a[z][t]==0){
        cout<<-1<<endl;
        return;
    }
    cout<<bfs(x,y)<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}