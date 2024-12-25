#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
using namespace std;
void trong(){
    int n,m;cin>>n>>m;
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1&&a[i+1][j]==1) b[i+1][j]=b[i][j]+1;
        }
    }
    for(int i=0;i<n;i++){
        sort(b[i],b[i]+m,greater<int>());
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x=(j+1)*b[i][j];
            y=max(x,y);
        }
    }
    cout<<y<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        trong();
    }
}