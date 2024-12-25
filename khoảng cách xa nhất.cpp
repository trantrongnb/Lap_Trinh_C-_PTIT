#include<iostream>
using namespace std;
void check(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(a[i]<a[j]){
                ans=max(ans,j-i);
                break;
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}