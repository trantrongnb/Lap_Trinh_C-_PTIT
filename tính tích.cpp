#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
void check(){
   int n,m;cin>>n>>m;
   int a[n],b[m];
   for(int i=0;i<n;i++) cin>>a[i];
   for(int j=0;j<m;j++) cin>>b[j];
   sort(a,a+n,greater<int>());
   sort(b,b+m);
   long long ans=(long long)a[0]*b[0];
   cout<<ans<<endl;
}
int main(){
   int t;cin>>t;
   while(t--){
    check();
   }
}