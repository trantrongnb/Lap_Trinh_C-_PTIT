#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
using namespace std;
int cnt=0;
class NhanVien{
    private:
    string ma,ten,gt,ns,dc,mst,ngay;
    public:
    friend istream& operator >>(istream &is,NhanVien &a){
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
    friend ostream& operator <<(ostream &os,NhanVien a){
        os<<a.ma<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.ngay<<endl;
        return os;
    }
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin>>N;
    for(i=0;i<N;i++) cin>>ds[i];
    for(i=0;i<N;i++) cout<<ds[i];
    return 0;
}