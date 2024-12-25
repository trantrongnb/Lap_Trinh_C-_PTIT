#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
#include<queue>
#include<map>
using namespace std;
int cnt=0;
string chuanhoa(string s){
    string ans="";
    ans+=toupper(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]==' ') ans+=toupper(s[i+1]);
    }
    return ans;
}
class gv{
    private:
    string ma,ten,bm;
    public:
    string getbm(){
        return bm;
    }
    friend istream &operator >>(istream &is,gv &a){
        cnt++;
        string tt=to_string(cnt);
        a.ma="GV"+string(2-tt.size(),'0')+tt;
        getline(is,a.ten);
        getline(is,a.bm);
        a.bm=chuanhoa(a.bm);
        return is;
    }
    friend ostream &operator <<(ostream &os,gv a){
        cout<<a.ma<<" "<<a.ten<<" "<<a.bm<<endl;
        return os;
    }
    friend bool cmp(gv a,gv b);
};
string chucuoi(string s){
    stringstream ss(s);
    string token;
    vector<string> v;
    while(ss>>token){
        v.push_back(token);
    }
    return v[v.size()-1];
}
bool cmp(gv a,gv b){
    if(chucuoi(a.ten)==chucuoi(b.ten)) return a.ma<b.ma;
    return  chucuoi(a.ten)<chucuoi(b.ten);
}
int main(){
    int n;cin>>n;
    map<string,vector<gv> > mp;
    getchar();
    gv a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i].getbm()].push_back(a[i]);
    }
    //sort(a,a+n,cmp);
    //for(int i=0;i<n;i++) cout<<a[i];
    int q;cin>>q;
    getchar();

    while(q--){
        string s;getline(cin,s);
        s=chuanhoa(s);
        cout<<"DANH SACH GIANG VIEN BO MON "<<s<<":"<<endl;
        for(gv x:mp[s]) cout<<x;
    }
}