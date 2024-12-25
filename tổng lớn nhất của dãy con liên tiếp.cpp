#include<iostream>
#include<math.h>
#include<algorithm>
typedef long long ll;
using namespace std;
typedef long long ll;
ll sum_cross(ll a[],int l,int r,int mid){
    ll sumr=0,max_sumr=-2000000000;
    ll suml=0,max_suml=-2000000000;
    for(int i=mid;i>=l;i--){
        suml+=a[i];
        max_suml=max(max_suml,suml);
    }
    for(int i=mid+1;i<=r;i++){
        sumr+=a[i];
        max_sumr=max(max_sumr,sumr);
    }
    return max_suml+max_sumr;
}
ll sum(ll a[],int l,int r){
    if(l==r) return a[l];
    int mid=(l+r)/2;
    return max(sum(a,l,mid),max(sum(a,mid+1,r),sum_cross(a,l,r,mid)));
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<sum(a,0,n-1)<<endl;
    }
}