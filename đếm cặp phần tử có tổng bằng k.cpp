#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
void check(){
   int n,k;cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   int dem=0;
   for(int i=0;i<n-1;i++){
    for(int j=n-1;j>i;j--){
        if(a[i]+a[j]==k) dem++;
        if(a[i]+a[j]<k) break;
    }
   }
   cout<<dem<<endl;
}
int main(){
   int t;cin>>t;
   while(t--){
    check();
   }
}