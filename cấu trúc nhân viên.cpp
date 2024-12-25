#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
struct NhanVien{
    string ten,gt,ns,dc,mst,ngay;
};
void nhap(NhanVien &a){
    getline(cin,a.ten);
    getline(cin,a.gt);
    getline(cin,a.ns);
    getline(cin,a.dc);
    getline(cin,a.mst);
    getline(cin,a.ngay);
}
void in(NhanVien a){
    cout<<"00001"<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.ngay;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}