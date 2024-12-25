#include<iostream>
#include<algorithm>
#include<vector> 
#include<string>
#include<iomanip> 
#include<sstream>
using namespace std;
int cnt=0;
string chuanhoa(string s){
    stringstream ss(s);
    string token;
    string ans="";
    while(ss>>token){
        ans+=toupper(token[0]);
        for(int i=1;i<token.size();i++) ans+=tolower(token[i]);
        ans+=" ";
    }
    ans.pop_back();
    return ans;
}
string chuan_ns(string s){
    if(s[1]=='/') s="0"+s;
    if(s[4]=='/') s=s.insert(3,"0");
    return s;
}
struct SinhVien{
    string ma,ten,lop,ns;
    float gpa;
};
void nhap(SinhVien ds[],int N){
        for(int i=0;i<N;i++){
            getchar();
            cnt++;
            string tt=to_string(cnt);
            getline(cin,ds[i].ten);
            getline(cin,ds[i].lop);
            getline(cin,ds[i].ns);
            cin>>ds[i].gpa; 
            ds[i].ma="B20DCCN"+string(3-tt.size(),'0')+tt;
            ds[i].ten=chuanhoa(ds[i].ten);
            ds[i].ns=chuan_ns(ds[i].ns);
        }
    }
void in(SinhVien ds[],int N){
        for(int i=0;i<N;i++){
            cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
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
