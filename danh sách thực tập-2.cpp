#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
#include<queue>
using namespace std;
struct SV{
    int stt;
    string ma,ten,lop,email,dn;
};
void nhap(SV a[],int n){
    for(int i=0;i<n;i++){
        a[i].stt=i+1;
        getline(cin,a[i].ma);
        getline(cin,a[i].ten);
        getline(cin,a[i].lop);
        getline(cin,a[i].email);
        getline(cin,a[i].dn);
    }
}
void in(SV a){
    cout<<a.stt<<" "<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<" "<<a.dn<<endl;
}
bool cmp(SV a,SV b){
    return a.ma<b.ma;
}
int main(){
    SV a[100];
    int n;cin>>n;
    getchar();
    nhap(a,n);
    sort(a,a+n,cmp);
    int q;cin>>q;
    while(q--){
        string s;cin>>s;
        for(int i=0;i<n;i++){
            if(s==a[i].dn) in(a[i]);
        }
    }
}