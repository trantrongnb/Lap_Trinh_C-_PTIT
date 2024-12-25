#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<vector>
#include<sstream>
#define ll long long;
void check(){
    int n;string s;
    cin>>n;getchar();
    getline(cin,s);
    for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
    stringstream ss(s);
    string token;
    vector<string> v;
    while(ss>>token){
        v.push_back(token);
    }
    for(int i=0;i<v.size();i++){
        v[i][0]=toupper(v[i][0]);
    }
    if(n==1){
        cout<<v[v.size()-1]<<" ";
        for(int i=0;i<v.size()-1;i++) cout<<v[i]<<" ";
    } else {
        for(int i=1;i<v.size();i++) cout<<v[i]<<" ";
        cout<<v[0]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    scanf(" ");
    while(t--){
       check();
    }
}