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
string chuanhoa(string s){
string ans="";
stringstream ss(s);
string token ;
vector<string> v;
while(getline(ss,token,'/')){
    v.push_back(token);
}
ans+=v[2];
ans+=v[0];
ans+=v[1];
return ans;
}
class NhanVien{
    private:
    string ma,ten,gt,ns,dc,mst,ngay;
    public:
    friend istream& operator >>(istream &is,NhanVien & a){
        if(cnt==0) scanf(" ");
        getline(is,a.ten);
        getline(is,a.gt);
        getline(is,a.ns);
        getline(is,a.dc);
        getline(is,a.mst);
        getline(is,a.ngay);
        cnt++;
        string tt=to_string(cnt);
        a.ma=string(5-tt.size(),'0')+tt;
        return is;
    }
    friend ostream &operator <<(ostream &os,NhanVien a){
        os<<a.ma<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.ngay<<endl;
        return os;
    }
    friend bool cmp(NhanVien a,NhanVien b);
};
bool cmp(NhanVien a,NhanVien b){
    return chuanhoa(a.ns)<chuanhoa(b.ns);
}
void sapxep(NhanVien ds[],int N){
    sort(ds,ds+N,cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}