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
    sort(a,a+n,greater<int>());
    vector<int> v;
    int l=0,r=n-1;
    while(l<=r){
        if(l==r){
            v.push_back(a[l]);
            l++;
            continue;
        }
        v.push_back(a[l]);
        v.push_back(a[r]);
        l++;r--;
    }
    for(int x:v) cout<<x<<" ";
    cout<<endl;
}
int main(){
   int t;cin>>t;
   while(t--){
    check();
   }
}