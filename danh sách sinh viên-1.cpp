#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iomanip> 
using namespace std;
int cnt=0;
struct SinhVien {
    string ma,ten,lop,ns;
    double gpa;
};
string chuan_hoa(string s){
    if(s[1]=='/') s="0"+s;
    if(s[4]=='/') s=s.substr(0,3)+"0"+s.substr(3);
    return s;
}
string dd(string s){
    string ans="B20DCCN"+string(3-s.size(),'0')+s;
    return ans;
}
void nhap(SinhVien ds[],int N){
    for(int i=0;i<N;i++){
        cnt++;
     getchar();
    getline(cin,ds[i].ten);
    getline(cin,ds[i].lop);
    getline(cin,ds[i].ns);
    ds[i].ns=chuan_hoa(ds[i].ns);
    ds[i].ma=dd(to_string(cnt));
    cin>>ds[i].gpa;
    }
}
void in(SinhVien ds[],int N){
    for(int i=0;i<N;i++){
        cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].ns<<fixed<<setprecision(2)<<" "<<ds[i].gpa<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin>>N;
    nhap(ds,N);
    in(ds,N);
    return 0;
}
