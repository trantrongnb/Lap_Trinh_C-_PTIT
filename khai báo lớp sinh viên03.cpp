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
string xuli1(string s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    s=" "+s;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ') s[i+1]=toupper(s[i+1]);
    }
    s=s.substr(1);
    return s;
}
string xuli2(string s){
    if(s[1]=='/') s="0"+s;
    if(s[4]=='/') s=s.substr(0,3)+"0"+s.substr(3);
    return s;
}
struct SinhVien{
    string ten,lop,ns;
    float gpa;
    friend istream&operator >>(istream &is,SinhVien&a){
        getline(is,a.ten);
        is>>a.lop>>a.ns>>a.gpa;
        scanf(" ");
        return is;
    }
    friend ostream&operator <<(ostream &os,SinhVien a){
        os<<"B20DCCN001"<<" "<<xuli1(a.ten)<<" "<<a.lop<<" "<<xuli2(a.ns)<<" "<<fixed<<setprecision(2)<<a.gpa;
        return os;
    }
};
int main(){
    SinhVien a;
    cin>>a;
    cout<<a;
    return 0;
}