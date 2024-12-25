#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class ql {
private:
    string ma, ten, lop, email;
public:
    friend istream& operator>>(istream& is, ql& a) {
        getline(is, a.ma);
        getline(is, a.ten);
        getline(is, a.lop);
        getline(is, a.email);
        return is;
    }
    string getlop(){
        return this->lop;
    }
    friend ostream& operator<<(ostream& os, const ql& a) {
        os << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
        return os;
    }
};
int main() {
    int n;cin>>n;
    getchar();
    ql a[n];
    for( int i=0;i<n;i++) cin>>a[i];
    int q;cin>>q;
    while(q--){
        string s;cin>>s;
        cout<<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
        for(ql x:a){
            if(x.getlop()==s){
                cout<<x;
            }
        }
    }
}
