#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
void check(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int x:a) cout<<x<<" ";
    cout<<endl;
}
int main(){
   int t;cin>>t;
   while(t--){
    check();
   }
}
