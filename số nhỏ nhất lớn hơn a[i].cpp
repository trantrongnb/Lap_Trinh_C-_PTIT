#include <iostream>
#include <vector>
#include <algorithm>
#include<math.h>
#include<cstring>
#include<utility>
#include<string>
#include<map>
using namespace std;
int a[1000005];
int n;
int check(int k){
    int res=-1;
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]>k){
            res=a[mid];
            r=mid-1;
        } else l=mid+1;
    }
    return res;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            a[i]=v[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(check(v[i])==-1) cout<<"_ ";
            else cout<<check(v[i])<<" ";
        }
        cout<<endl;
    }
}