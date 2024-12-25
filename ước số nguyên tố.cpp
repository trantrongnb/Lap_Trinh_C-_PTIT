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
void check(long long s){
    for(long long i=2;i*i<=s;i++){
        if(s%i==0){
            while(s%i==0){
                cout<<i<<" ";
                s/=i;
            }
        }
    }
    if(s!=1) cout<<s;
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        long long s;cin>>s;
       check(s);
    }
}