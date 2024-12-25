#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    int n,m,p;
    cin>>n>>m>>p;
    int a[n][m],b[m][p];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>a[i][j];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++) cin>>b[i][j];
    }
    int ans[n][p];
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            int sum=0;
            for(int k=0;k<m;k++){
                sum+=a[i][k]*b[k][j];
            }          
            ans[i][j]=sum;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++) cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}