#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
using namespace std;
int dx[]={1,0};
int dy[]={0,1};
int n,k;
int a[22][22];
int dem=0;
void ql(int i,int j,int sum){
    if(sum>k) return;
    if(i==n&&j==n){
        if(sum==k){
            dem++;return;
        }
    }
    for(int k=0;k<2;k++){
        int i1=i+dx[k],j1=j+dy[k];
        if(i1>=1&&i1<=n&&j1>=1&&j1<=n){
            ql(i1,j1,sum+a[i1][j1]);
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        dem=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) cin>>a[i][j];
        }
        ql(1,1,a[1][1]);
        cout<<dem<<endl;
    }
}