#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<vector>
#define ll long long
int MAX=1e9+7;
int a[105][105],n,m;
using namespace std;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
void loang(int i,int j){
      a[i][j]=0;
    for(int k=0;k<8;k++){
        int i1=i+dx[k],j1=j+dy[k];
        if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]==1){
            loang(i1,j1);
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int dem=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin>>a[i][j];
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j]==1){
                    dem++;
                    loang(i,j);
                }
            }
        }
        cout<<dem;
        cout<<endl; 
    }
}