#include<iostream>
using namespace std;
#include<map>
#include<string>
void check(){
   int n,k;cin>>n>>k;
   int a[n+1];
   for(int i=1;i<=n;i++) cin>>a[i];
   for(int i=1;i<=n;i++){
    if(a[i]==k){
        cout<<i<<endl;break;
    }
   }
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}