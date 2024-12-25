#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
#include<sstream>
#include<vector>
#define ll long long
#include<iostream>
#include<string>
#include<iomanip>
#include <iostream>
int ucln(ll a,ll b){
    if(b==0) return a;
    return ucln(b,a%b);
}
ll bcnn(ll a,ll b){
    ll s=a*b/ucln(a,b);
    return s;
}
void check(){
    ll x,y,z,n;cin>>x>>y>>z>>n;
    ll res=1;
    res=bcnn(bcnn(x,y),z);
    ll l=pow(10,n-1),r=pow(10,n)-1;
    ll l1=l/res;
    if(l1*res<l) l1++;
    if(l1*res>r) cout<<-1<<endl;
    else cout<<l1*res<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}