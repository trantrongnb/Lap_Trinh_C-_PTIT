#include<iostream>
#include<set>
#include<map>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
void nho(int m,int s){
    int a[m];
    memset(a,0,sizeof(a));
    a[0]=1;
    s--;
    for(int i=m-1;i>=0;i--){
        for(int k=9;k>=0;k--){
            if(s>=k){
                a[i]+=k;
                s-=k;break;
            }
        }
    }
    for(int x:a) cout<<x;
    cout<<" ";
}
void lon(int m,int s){
    int a[m];
    memset(a,0,sizeof(a));
    for(int i=0;i<m;i++){
        for(int k=9;k>=0;k--){
            if(s>=k){
                a[i]+=k;
                s-=k;break;
            }
        }
    }
    for(int x:a) cout<<x;
}
int main(){
    int m,s;cin>>m>>s;
    if(s>9*m||(s==0&&m>1)){
        cout<<"-1-1";
        return 0;
    }
    nho(m,s);
    lon(m,s);
}