#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
void check(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i=0;i<k;i++) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}