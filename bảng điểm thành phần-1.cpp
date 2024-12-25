#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
#include<queue>
using namespace std;
int cnt=0;
struct SinhVien{
    string msv,ten,lop;
    double d1,d2,d3;
};
void nhap(SinhVien &a){
    getchar();
    getline(cin,a.msv);
    getline(cin,a.ten);
    getline(cin,a.lop);
    cin>>a.d1>>a.d2>>a.d3;
}
bool cmp(SinhVien a,SinhVien b){
    // string s1=a.msv.substr(7);
    // string s2=b.msv.substr(7);
    // return s1<s2;
    return a.msv<b.msv;
}
void sap_xep(SinhVien ds[],int n){
    sort(ds,ds+n,cmp);
}
void in_ds(SinhVien ds[],int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" ";
        printf("%.1lf %.1lf %.1lf\n",ds[i].d1,ds[i].d2,ds[i].d3);
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}