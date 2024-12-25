#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<vector>
#include<sstream>
#define ll long long;
map<string,int> mp;
void check(){
    string s;getline(cin,s);
    for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
    stringstream ss(s);
    string token;
    vector<string> v;
    while(ss>>token){
        v.push_back(token);
    }
    string tmp;
    tmp=v[v.size()-1];
    for(int i=0;i<v.size()-1;i++){
        tmp+=v[i][0];
    }
    if(mp.find(tmp)==mp.end()) {
        cout<<tmp<<"@ptit.edu.vn"<<endl;
        mp[tmp]=1;
    } else{
        cout<<tmp<<mp[tmp]+1<<"@ptit.edu.vn"<<endl;
        mp[tmp]++;
    }
}
int main(){
    int t;cin>>t;
    getchar();
    while(t--){
        check();
    }
}