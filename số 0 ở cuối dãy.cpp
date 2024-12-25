#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
void check(){
   int n;cin>>n;
   long long a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   vector<long long> ans;
   for(int i=0;i<n;i++){
    if(a[i]!=0) ans.push_back(a[i]);
   }
   int dem=n-ans.size();
   for(int i=1;i<=dem;i++) ans.push_back(0);
   for(long long x:ans) cout<<x<<" ";
    cout<<endl;
}
int main(){
   int t;cin>>t;
   while(t--){
    check();
   }
}