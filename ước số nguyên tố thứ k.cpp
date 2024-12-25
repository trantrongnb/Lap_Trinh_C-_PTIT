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
    vector<int> tmp;
    while(t--){
        int n,k;cin>>n>>k;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                while(n%i==0){
                    tmp.push_back(i);
                    n/=i;
                }
            }
        }
        if(n!=1) tmp.push_back(n);
        if(k>tmp.size()) cout<<-1<<endl;
        else cout<<tmp[k-1]<<endl;
        tmp.clear();
    }
}