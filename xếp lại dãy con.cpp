#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int l,r;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                l=i+1;break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                r=i+1;break;
            }
        }
        cout<<l<<" "<<r<<endl;
    }
}