#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<cstring>
#include<set>
using namespace std;
typedef long long ll;
void check(){
    int n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i]*a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=2;i--){
        int l=0;
        int r=i-1;
        while(l<r){
        if(a[l]+a[r]==a[i]){
            cout<<"YES"<<endl;return;
        } else {
            if(a[l]+a[r]>a[i]) r--;
            else l++;
        }
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}