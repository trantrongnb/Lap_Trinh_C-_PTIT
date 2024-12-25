#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iomanip> 
#include<sstream>
using namespace std;
int cnt=0;
struct SinhVien{
    string ma,ten,lop,ns;
    double gpa;
};
string chuan_ns(string s){
    if(s[1]=='/') s="0"+s;
    if(s[4]=='/') s=s.insert(3,"0");
    return s;
}
string chuan_ten(string s){
    stringstream ss(s);
    string token;
    string ans;
    while(ss>>token){
        ans+=toupper(token[0]);
        for(int i=1;i<token.size();i++) ans+=tolower(token[i]);
        ans+=' ';
    }
    ans.pop_back();
    return ans;
}
void nhap(SinhVien ds[],int N){
    for(int i=0;i<N;i++){
        getchar();
        cnt++;
        getline(cin,ds[i].ten);
        getline(cin,ds[i].lop);
        getline(cin,ds[i].ns);
        cin>>ds[i].gpa;
        string tt=to_string(cnt);
        ds[i].ma="B20DCCN"+string(3-tt.size(),'0')+tt;
        ds[i].ten=chuan_ten(ds[i].ten);
        ds[i].ns=chuan_ns(ds[i].ns);
    }
}
void in(SinhVien ds[],int N){
    for(int i=0;i<N;i++)
    cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
}
bool cmp(SinhVien a,SinhVien b){
    return a.gpa>b.gpa;
}
void sapxep(SinhVien ds[],int N){
    sort(ds,ds+N,cmp);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
