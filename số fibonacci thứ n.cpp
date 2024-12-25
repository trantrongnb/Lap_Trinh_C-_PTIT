#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<utility>
#include<math.h>
long long fibo[92];
void solve(){
    fibo[1]=1;
    fibo[1]=1;
    for(int i=2;i<=92;i++) fibo[i]=fibo[i-1]+fibo[i-2];
}
int main(){
    int t;cin>>t;
    solve();
    while(t--){
        int n;cin>>n;
        cout<<fibo[n]<<endl;
    }
}