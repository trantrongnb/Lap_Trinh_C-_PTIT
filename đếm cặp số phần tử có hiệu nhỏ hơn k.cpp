#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<cstring>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long  cnt=0;
        for(int i=0;i<n;i++){
            auto it=lower_bound(a+i+1,a+n,a[i]+k);
            int x=it-(a+i)-1;
            cnt=cnt+x;
        }
        cout<<cnt<<endl;
    }
}