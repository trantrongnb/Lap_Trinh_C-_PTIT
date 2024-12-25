#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>

int tmp = 0;
using namespace std;

string chuanhoa(string s) {
    for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
    vector<string> v;
    stringstream ss(s);
    string token;
    while(ss >> token) {
        v.push_back(token);
    }
    for(int i = 0; i < v.size(); i++) {
        v[i][0] = toupper(v[i][0]);
    }
    string ans = "";
    for(int i = 0; i < v.size(); i++) ans += v[i] + " ";
    ans.erase(ans.size() - 1); 
    return ans;
}
class SinhVien {
    private:
    string ma, ten, lop, ns;
    double gpa;
    public:
    string getten() {
        return this->ten;
    }
    double getgpa(){
        return this->gpa;
    }
    string getma(){
        return this->ma;
    }
    friend istream &operator>>(istream &is, SinhVien &a) {
        tmp++;
        scanf("\n");
        getline(is, a.ten);
        getline(is, a.lop);
        getline(is, a.ns);
        is >> a.gpa;
        a.ten = chuanhoa(a.ten);
        string tt = to_string(tmp);
        a.ma = "B20DCCN" + string(3 - tt.size(), '0') + tt;
        if(a.ns[1] == '/') a.ns = "0" + a.ns;
        if(a.ns[4] == '/') a.ns.insert(3, "0");
        
        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien a) {
        os << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
        return os;
    }
    friend bool cmp(SinhVien a, SinhVien b);
};
bool cmp(SinhVien a, SinhVien b) {
    if(a.gpa== b.gpa) return a.ma < b.ma;
    return a.gpa > b.gpa;
}
void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}
int main() {
    SinhVien ds[50];
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) cin >> ds[i];
    sapxep(ds, N);
    for(int i = 0; i < N; i++) {
        cout << ds[i];
    }
    return 0;
}
