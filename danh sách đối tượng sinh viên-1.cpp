#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include<cstring>
int tmp=0;
using namespace std;
class SinhVien{
    private:
    string ma,ten,lop,ns;
    double gpa;
    public:
    friend istream &operator >>(istream &is,SinhVien &a){
        tmp++;
        getchar();
        getline(is,a.ten);
        getline(is,a.lop);
        getline(is,a.ns);
        cin>>a.gpa;
        string tt=to_string(tmp);
        a.ma="B20DCCN"+string(3-tt.size(),'0')+tt;
        string s=a.ns;
        if(s[1]=='/') s="0"+s;
        if(s[4]=='/') s=s.substr(0,3)+"0"+s.substr(3);
        a.ns=s;
        return is;
    }
    friend ostream &operator <<(ostream &os,SinhVien a){
        os<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
        return os;
    }
};
int main(){
    SinhVien ds[50];
    int N,i;
    cin>>N;
    for(i=0;i<N;i++) cin>>ds[i];
    for(int i=0;i<N;i++){
        cout<<ds[i];
    }
    return 0;
}