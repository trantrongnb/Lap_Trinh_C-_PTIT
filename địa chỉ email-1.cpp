#include<iostream>
#include<set>
#include<map>
#include<string>
#include<sstream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
    stringstream ss(s);
    string token;
    vector<string> v;
    while(ss>>token){
        v.push_back(token);
    }
    string ans=v[v.size()-1];
    for(int i=0;i<v.size()-1;i++){
        ans+=v[i][0];
    }
    cout<<ans;
    cout<<"@ptit.edu.vn";
}