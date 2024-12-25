#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

class ql {
private:
    string ma, ten, lop, email;

public:
    friend ostream& operator<<(ostream& os, ql a) {
        os << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
        return os;
    }

    friend istream& operator>>(istream& is, ql& a) {
        getline(is, a.ma);
        getline(is, a.ten);
        getline(is, a.lop);
        getline(is, a.email);
        return is;
    }

    string getma() {
        return this->ma;
    }
    string getlop(){
        return this->lop;
    }
};

string viethoa(string &s) {
    for (int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
    return s;
}

string tach(string s) {
    stringstream ss(s);
    string token;
    string ans = "";
    while (ss >> token) {
        ans = ans + token[0];
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    getchar();
    ql a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int q;
    cin >> q;
    getchar();
    while (q--) {
        string s;
        getline(cin, s);
        s = viethoa(s);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        string tmp = tach(s);
        for (int i = 0; i < n; i++) {
            if (a[i].getma()[5]== s[0]) {
                if(s[0]=='K'||s[0]=='V'||s[0]=='D') cout<<a[i];
                else if(a[i].getlop()[0]!='E') cout<<a[i];
            }
        }
    }

    return 0;
}
