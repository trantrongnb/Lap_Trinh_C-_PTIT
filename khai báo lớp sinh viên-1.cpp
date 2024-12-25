#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
#define ll long long
struct SinhVien{
    string ten,lop,ns;
    float gpa;
    void nhap(){                        
        getline(cin,ten);
        getline(cin,lop);
        getline(cin,ns);
        cin>>gpa;
        getchar();
    }
    void xuat(){
        string s=ns;
        if(s[1]=='/') s="0"+s;
        if(s[4]=='/') s=s.substr(0,3)+"0"+s.substr(3);
        ns=s;
        cout<<"B20DCCN001"<<" "<<ten<<" "<<lop<<" "<<ns<<" "<<fixed<<setprecision(2)<<gpa;
    }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}