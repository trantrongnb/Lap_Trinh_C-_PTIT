#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
void check(){
    int n;cin>>n;
    int a[4*n+1][4*n+1];
    int x=1;
    for(int i=1;i<=4*n;i++){
        for(int j=1;j<=4*n;j++){
            a[i][j]=x;
            x++;
        }
    }
    vector<int> v1,v2;
    int h1=1,h2=4*n,c1=1,c2=4*n;
    while(1){
        if(h1>h2) break;
        for(int i=h1;i<=h2;i++){
            v1.push_back(a[i][c1]);
        }
        c2--;c1++;
        if(c1>c2) break;
        for(int i=c1;i<=c2;i++){
            v1.push_back(a[h2][i]);
        }
        h2--;h1++;
        if(h1>h2) break;
        for(int i=h2;i>=h1;i--){
            v1.push_back(a[i][c2]);
        }
        c2--;c1++;
        if(c1>c2) break;
        for(int i=c2;i>=c1;i--){
            v1.push_back(a[h1][i]);
        }
        h2--;h1++;
    }
    h2=4*n;h1=1;c2=4*n;c1=1;
    while(1){
        if(h1>h2) break;
        for(int i=h2;i>=h1;i--){
            v2.push_back(a[i][c2]);
        }
        c2--;c1++;
        if(c1>c2) break;
        for(int i=c2;i>=c1;i--){
            v2.push_back(a[h1][i]);
        }
        h2--;h1++;
        if(h1>h2) break;
        for(int i=h1;i<=h2;i++){
            v2.push_back(a[i][c1]);
        }
        c1++;c2--;
        if(c1>c2) break;
        for(int i=c1;i<=c2;i++){
            v2.push_back(a[h2][i]);
        }
        h2--;h1++;
    }
    for(int i=v2.size()-1;i>=0;i--) cout<<v2[i]<<" ";
    cout<<endl;
    for(int i=v1.size()-1;i>=0;i--) cout<<v1[i]<<" ";
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}