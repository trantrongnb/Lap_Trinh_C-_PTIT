#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
#define ll long long
ll ucln(ll a,ll b){
    if(b==0) return a;
    return ucln(b,a%b);
}
struct PhanSo{
    ll a,b;
};
void nhap(PhanSo &p){
    cin>>p.a>>p.b;
}
void in(PhanSo p){
    cout<<p.a<<"/"<<p.b;
}
void xuli(PhanSo &p){
    ll tmp=ucln(p.a,p.b);
    p.a=p.a/tmp;
    p.b=p.b/tmp;
}
PhanSo tong(PhanSo p,PhanSo q){
    PhanSo ans;
    xuli(p);
    xuli(q);
    ans.b=p.b*q.b/ucln(p.b,q.b);
    ans.a=ans.b/p.b*p.a+ans.b/q.b*q.a;
    xuli(ans);
    return ans;
}
int main(){
    struct PhanSo p,q;
    nhap(p);nhap(q);
    PhanSo t=tong(p,q);
    in(t);
    return 0;
}

