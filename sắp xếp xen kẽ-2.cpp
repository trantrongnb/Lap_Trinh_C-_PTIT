#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n ;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,greater<int>());
        int l=0,r=n-1;
        while(l<r){
            cout<<a[l]<<" ";
            l++;
            cout<<a[r]<<" ";
            r--;
        }
        if(l==r) cout<<a[r];
        cout<<endl;
    }
    return 0;
}