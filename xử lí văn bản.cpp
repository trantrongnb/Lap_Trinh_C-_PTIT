#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iomanip> 
#include<sstream>
using namespace std;
string thuong(string s){
    for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
    return s;
}
string hoa(string s){
    s[0]=toupper(s[0]);
    return s;
}
int main(){
    vector<string> v;
    string s;
    while(cin>>s){
        s=thuong(s);
        v.push_back(s);
    }
    int ok=1;
    for(int i=0;i<v.size();i++){
        if(ok==1){
            v[i]=hoa(v[i]);
            ok=0;
        }
           char kitu=v[i][v[i].size()-1];
            if(kitu=='.'||kitu=='!'||kitu=='?'){
                v[i].pop_back();
                cout<<v[i]<<endl;
                ok=1;
            } else cout<<v[i]<<" ";
    }
}
