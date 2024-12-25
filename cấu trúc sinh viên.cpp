#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
struct SinhVien{
    string ten,msv,ns;
    double gpa;
};
void nhap(SinhVien &a){
    getline(cin,a.ten);
    cin>>a.msv>>a.ns;
    cin>>a.gpa;
    getchar();
}
void xuli(SinhVien &a){
    string s=a.ns;
    if(s[1]=='/') s="0"+s;
    if(s[4]=='/') s=s.substr(0,3)+"0"+s.substr(3);
    a.ns=s;
}
void in(SinhVien a){
    xuli(a);
    cout<<"B20DCCN001"<<" ";
    cout<<a.ten<<" "<<a.msv<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}