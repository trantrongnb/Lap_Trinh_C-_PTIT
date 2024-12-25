#include<iostream>
using namespace std;
void check(){
    int n;
    long long k;
    cin>>n>>k;
    long long ans=0;
    for(int i=1;i<=n;i++){
        ans+=i%k;
    }
    if(ans==k) cout<<1<<endl;
    else cout<<0<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}