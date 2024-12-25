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
struct NhanVien {
    string ma,ten,gt,ns,dc,mst,ngay;
};
string chuanhoa(string s){
    stringstream ss(s);
    string token,ans;
    vector<string> v;
    while(getline(ss,token,'/')){
        v.push_back(token);
    }
    ans+=v[2];
    ans+=v[0];
    ans+=v[1];
    return ans;
}
void nhap(NhanVien& a){
    if(cnt==0) getchar();
    cnt++;
    string tt=to_string(cnt);
    getline(cin,a.ten);
    getline(cin,a.gt);
    getline(cin,a.ns);
    getline(cin,a.dc);
    getline(cin,a.mst);
    getline(cin,a.ngay);
    a.ma=string(5-tt.size(),'0')+tt;
}
bool cmp(NhanVien a,NhanVien b){
    return chuanhoa(a.ns)<chuanhoa(b.ns);
}
void sapxep(NhanVien ds[],int N){
    stable_sort(ds,ds+N,cmp);
}
void inds(NhanVien ds[],int N){
    for(int i=0;i<N;i++){
        cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].mst<<" "<<ds[i].ngay<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin>>N;
    for(i=0;i<N;i++) nhap(ds[i]);
    sapxep(ds,N);
    inds(ds,N);
    return 0;
}