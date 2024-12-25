#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<algorithm>
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int a[n][m],b[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                b[i][j]=a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||j==0|i==n-1||j==m-1) cout<<a[i][j];
                else cout<<" ";
            }
            cout<<endl;
        }
    }
}