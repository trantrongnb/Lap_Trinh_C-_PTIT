#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<vector>
#include<sstream>
#define ll long long
int MAX=1e9+7;
using namespace std;
int kt1(string s){
    for(int i=1;i<s.size();i++){
        if(s[0]!=s[i]) return 0;
    }
    return 1;
}
int kt2(string s){
    int i=s.size()-2;
    while(i>=0&&s[i]<s[i+1]) i--;
    if(i==-1) return 1;
    return 0;
}
int kt3(string s){
    if((s[0]==s[1]&&s[1]==s[2])&&(s[3]==s[4])) return 1;
    return 0;
}
int kt4(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!='6'&&s[i]!='8') return 0;
    }
    return 1;
}
void check(string s){
    if(kt1(s)||kt2(s)||kt3(s)||kt4(s)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string ans;
        for(int i=5;i<s.size();i++){
            if(isdigit(s[i])){
                ans+=s[i];
            }
        }
        check(ans);
    }
}