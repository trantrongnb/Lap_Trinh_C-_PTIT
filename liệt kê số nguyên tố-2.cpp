#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<utility>
#include<math.h>
int cnt[100001]={0};
void solve(){
    cnt[1]=cnt[0]=1;
    for(int i=2;i*i<=100001;i++){
        if(cnt[i]==0){
            for(int j=i*i;j<=100001;j+=i)  cnt[j]=1;
        }
    }
}
int main(){
    int t;cin>>t;
    solve();
    while(t--){
        int a,b;cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(cnt[i]==0) cout<<i<<" ";
        }
        cout<<endl;
    }
}