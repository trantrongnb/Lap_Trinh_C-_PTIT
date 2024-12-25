#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include<map>
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
    map<int,vector<ql> > mp;
    for( int i=0;i<n;i++){
        ql tmp;
        cin>>tmp;
        mp[stoi(tmp.getlop().substr(1,2))+2000].push_back(tmp);
    }
    int q;cin>>q;
    while(q--){
        int s;cin>>s;
        cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
        for(ql x:mp[s]){
            cout<<x;
        }
    }
}
