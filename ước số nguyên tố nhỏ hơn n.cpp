#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<utility>
#include<math.h>
int cnt[1000001]={0};
void solve(){
    cnt[1]=cnt[0]=1;
    for(int i=2;i*i<=1000001;i++){
        if(cnt[i]==0){
            for(int j=i*i;j<=1000001;j+=i)  cnt[j]=1;
        }
    }
}
int main(){
    int t;cin>>t;
    solve();
    while(t--){
        int n;cin>>n;
        for(int i=1;i<=n;i++){
            if(cnt[i]==0) cout<<i<<" ";
        }
        cout<<endl;
    }
}