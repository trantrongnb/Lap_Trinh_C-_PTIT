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
    int dem=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==k) dem++;
    }
    if(dem==0) cout<<-1;
    else cout<<dem;
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}