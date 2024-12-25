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
void check(string s){
    set<char> se;
    if(s[0]=='0'){
        cout<<"INVALID"<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])==0){
            cout<<"INVALID"<<endl;return;
        }
        se.insert(s[i]);
    }
    if(se.size()==10) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        check(s);
    }
}