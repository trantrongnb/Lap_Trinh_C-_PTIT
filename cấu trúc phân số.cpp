#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
long long ucln(long long a,long long b){
    if(b==0) return a;
    return ucln(b,a%b);
}
struct PhanSo{
    long long a,b;
};
void nhap(PhanSo &p){
    cin>>p.a>>p.b;
}
void rutgon(PhanSo &p){
    long long tmp=ucln(p.a,p.b);
    p.a=p.a/tmp;
    p.b=p.b/tmp;
}
void in(PhanSo p){
    cout<<p.a<<"/"<<p.b;
}
int main(){
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}