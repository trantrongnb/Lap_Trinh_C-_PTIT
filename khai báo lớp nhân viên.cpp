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
using namespace std;
class NhanVien{
    public:
    string ten,gt,ns,dc,mst,ngay;
    friend istream&operator >>(istream &is,NhanVien&a){
        getline(is,a.ten);
        getline(is,a.gt);
        getline(is,a.ns);
        getline(is,a.dc);
        getline(is,a.mst);
        getline(is,a.ngay);
        return is;
    }
    friend ostream &operator >>(ostream&os,NhanVien&a){
        os<<"00001"<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.ngay;
        return os;
    }
};
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}