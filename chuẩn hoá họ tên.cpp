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
    for(int i=0;i<v.size()-1;i++){
    v[i][0]=toupper(v[i][0]);
    if(i==v.size()-2) cout<<v[i]<<", ";
    else cout<<v[i]<<" ";
    }
    for(int i=0;i<v[v.size()-1].size();i++){
        v[v.size()-1][i]=toupper(v[v.size()-1][i]);
    }
    cout<<v[v.size()-1];
}