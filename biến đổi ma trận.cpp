#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
#include<queue>
using namespace std;
void check(){
    int n;cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>a[i][j];
    }
    int row[n],col[n];
    memset(row,0,sizeof(row));
    memset(col,0,sizeof(col));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            row[i]+=a[i][j];
            col[j]+=a[i][j];      }
    }
    int maxsum=0;
    for(int i=0;i<n;i++){
        maxsum=max(maxsum,row[i]);
        maxsum=max(maxsum,col[i]);
    }
    int ans=0;
    int i=0,j=0;
    while(i<n&&j<n){
        int dif=min(maxsum-row[i],maxsum-col[j]);
        row[i]+=dif;
        col[j]+=dif;
        ans+=dif;
        if(row[i]==maxsum) i++;
        if(col[j]==maxsum) j++;
    }
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
         check();
    }
}